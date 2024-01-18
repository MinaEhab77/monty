#include "monty.h"
/**
 * _addd - adds the top two elements  stack.
 * @h:  head of the stackk
 * @c: number of the line
*/
void _addd(stack_t **h, unsigned int c)
{
	stack_t *he;
	int len = 0;
	int aux;

	he = *h;
	while (he)
	{
		he = he->next;
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
