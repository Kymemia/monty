#include "monty.h"

/**
 */

void to_swap(stack_t **top, unsigned int idx)
{
	stack_t *wait_list;
	int flin;
	
	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", idx);
		lib_stack(top, idx);
		fclose(doremi.bagg);
		free(doremi.dits);
		exit(EXIT_FAILURE);
	}

	wait_list = *top;
	flin = wait_list->n;
	wait_list->n = wait_list->next->n;
	wait_list->next->n = flin;
}
