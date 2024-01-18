#include "monty.h"

/**
* execute - execute the code
* @stack: head stack
* @counter: counter
* @file: poiner monty
* @content: line_content
*/

int executee(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pintt},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int k = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[k].opcode && op)
	{
		if (strcmp(op, opst[k].opcode) == 0)
		{	opst[k].f(stack, counter);
			return (0);
		}
		k++;
	}
	if (op && opst[k].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
