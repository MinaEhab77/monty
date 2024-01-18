#include "monty.h"
/**
 * _popp - print top
 * @h:  head
 * @c: line_number
*/
void _popp(stack_t **h, unsigned int c)
{
	stack_t *he;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	he = *h;
	*h = he->next;
	free(he);
}
