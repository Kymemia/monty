#include "monty.h"

/**
 */

void to_pint(stack_t **top, unsigned int idx)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", idx);
		fclose(doremi.bagg);
		free(doremi.dits);
		lib_stack(top, idx);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
