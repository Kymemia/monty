#include "monty.h"

/**
 */

void add_q(stack_t **top, unsigned int idx)
{
	stack_t *new_node;
	stack_t *wait_line;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Can't locate memory\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = idx;
	new_node->next = NULL;

	if (*top == NULL)
	{
		*top = new_node;
		new_node->prev = NULL;
		return;
	}

	wait_line = *top;
	while (wait_line->next != NULL)
	{
		wait_line = wait_line->next;
	}
	wait_line = new_node;
	new_node->prev = wait_line;
}
