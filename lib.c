#include "monty.h"

/**
 */

void lib_stack(stack_t **top, unsigned int idx)
{
	stack_t *flin;
	(void)idx;

	flin = *top;
	while (*top)
	{
		flin = (*top)->next;
		free(*top);
		*top = flin;
	}
}
