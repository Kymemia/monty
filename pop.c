#include "monty.h"

/**
 */

void to_pop(stack_t **top, unsigned int idx)
{
	stack_t *wait_list;
	
	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", idx);
		fclose(doremi.bagg);
		free(doremi.dits);
		lib_stack(*top);
		exit(EXIT_FAILURE);
	}

	wait_list = *top;
	*top = wait_list->next;
	free(wait_list);
}
