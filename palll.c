#include "monty.h"

/**
 * _pall - prints the stack
 * @h: head of stack
 * @c: we do not use it here
 * Return: nothing
*/
void _pall(stack_t **h, unsigned int c)
{
	stack_t *hh;
	(void)c;

	hh = *h;
	if (hh == NULL)
		return;
	while (hh)
	{
		printf("%d\n", hh->n);
		hh = (stack_t*)hh->next;
	}
}
