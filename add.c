#include "monty.h"

/**
 */

void element_add(stack_t **top, unsigned int idx)
{
	stack_t *t;
	int len = 0;
	int flin;

	t = *top;

	while (t && t->n !=0)
	{
		t = t->next;
		len++;
	}

	if (len < 3)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", idx);
		fclose(doremi.bagg);
		free(doremi.dits);
		lib_stack(top, idx);
		exit(EXIT_FAILURE);
	}
	t = *top;
	flin = t->n + t->next->n;
	t->next->n = flin;
	*top = t->next;
	free(t);
}
