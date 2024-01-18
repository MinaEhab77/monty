#include "monty.h"

/**
 * _push - stack
 * @h: head
 * @c: counter
 * Return: nothing
*/
void _push(stack_t **h, unsigned int c)
{
	int k, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE); }
	k = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(h, k);
	else
		addqueue(h, k);
}
