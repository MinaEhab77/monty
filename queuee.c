#include "monty.h"
/**
 * _queuee - prints  top
 * @h: head of stack
 * @c: num of the line
*/
void _queuee(stack_t **h, unsigned int c)
{
	(void)h;
	(void)c;
	bus.lifi = 1;
}

/**
 * addqueue - add n ode to  tail stack
 * @n: new value
 * @h: head of the stack
*/
void addqueue(stack_t **h, int n)
{
	stack_t *n_node;
	stack_t *aux;

	aux = *h;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*h = n_node;
		n_node->prev = NULL;
	}
	else
	{
		aux->next = n_node;
		n_node->prev = aux;
	}
}
