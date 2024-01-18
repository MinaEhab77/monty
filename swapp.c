#include "monty.h"

/**
 * _swap - add two elements to st.
 * @h: head
 * @c: line_number
 * Return: nothing
*/
void _swap(stack_t **h, unsigned int c)
{
	stack_t *hh;
	int len = 0, aux;

	hh = *h;
	while (hh)
	{
		hh = hh->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	hh = *h;
	aux = hh->n;
	hh->n = hh->next->n;
	hh->next->n = aux;
}
