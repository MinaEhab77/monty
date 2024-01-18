#include "monty.h"
/**
 * add_node - add node head
 * @h: head
 * @i: newvalue
*/
void add_node(stack_t **h, int i)
{

	stack_t *new_node, *aux;

	aux = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->i = i;
	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;
}
