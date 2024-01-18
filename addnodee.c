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
		aux->prev = (struct stack_t*)new_node;
	new_node->i = (stack_t*)i;
	new_node->next = *h;
	new_node->prev = NULL;
	*head = new_node;
}
