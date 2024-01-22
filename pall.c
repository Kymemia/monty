#include "monty.h"

/**
 */

void stack_print(stack_t *stack)
{
	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}

/**
 */
void to_pall(stack_t **top, unsigned int idx)
{
	(void)idx;

	if (top == NULL || *top == NULL)
		return;
	stack_print(*top);
}
