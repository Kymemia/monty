#include "monty.h"

/**
 */

void addnode(stack_t **top, unsigned int n)
{
	stack_t *new_node, *flin;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "memory not found\n");
		exit(EXIT_FAILURE);
	}
	flin = *top;
	if (flin)
		flin->prev = new_node;
	new_node->n = n;
	new_node->next = *top;
	new_node->prev = NULL;

	*top = new_node;
}
