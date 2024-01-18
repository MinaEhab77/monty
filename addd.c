#include "monty.h"
/**
 * _addd - add to stack.
 * @h:  head
 * @c: counter
 */
void _addd(stack_t **h, unsigned int c)
{
	stack_t *he;
	int len = 0;
	int aux;

	he = *h;
	while (he)
	{
		he = (stack_t*)he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	he = *h;
	aux = he->n + he->next->n;
	he->next->n = aux;
	*h = he->next;
	free(he);
}
