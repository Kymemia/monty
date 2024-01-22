#include "monty.h"

/**
 *
 */

void lets_push(stack_t **top, unsigned int idx)
{
	int n = 0;
	int k = 0;
	atoxz doremi = {NULL, NULL, NULL, 0, NULL};

	if (!doremi.arg || doremi.arg[0] == '-')
	{
		fprintf(stderr, "L%d: usage: push integer\n", idx);
		fclose(doremi.bagg);
		free(doremi.dits);
		lib_stack(top, idx);
		exit(EXIT_FAILURE);
	}
	for (; doremi.arg[k] != '\0'; k++)
	{
		if (doremi.arg[k] > '9' || doremi.arg[k] < '0')
		{
			fprintf(stderr, "L%d: usage: push integer\n", idx);
			fclose(doremi.bagg);
			free(doremi.dits);
			lib_stack(top, idx);
			exit(EXIT_FAILURE);
		}
	}

	n = atoi(doremi.arg);

	if (doremi.crofty == 0)
		addnode(top, n);
	else
	{
		add_q(top, n);
	}
}
