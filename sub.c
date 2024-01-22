#include "monty.h"

/**
 */

void to_sub(stack_t **top, unsigned int idx)
{
	stack_t *flin = *top;
	int nodes = 0;
	int result;

	do
	{
		nodes++;
		flin = flin->next;
	} while (flin != NULL);

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", idx);
		lib_stack(top, idx);
		fclose(doremi.bagg);
		free(doremi. dits);
		exit(EXIT_FAILURE);
	}
	flin = *top;
	result = flin->next->n - flin->n;
	flin->next->n = result;
	*top = flin->next;
	free(flin);
}
