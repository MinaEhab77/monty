#include "monty.h"
/**
* free_stack - free ddl
* @h: head
*/
void free_stack(stack_t *h)
{
	stack_t *aux;

	aux = h;
	while (h)
	{
		aux = h->next;
		free(h);
		h = aux;
	}
}
