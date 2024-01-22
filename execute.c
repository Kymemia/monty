#include "monty.h"

/**
 */
int to_execute_wrapper(char *dits, stack_t **top, const unsigned int idx)
{
	return to_execute(dits, top, idx);
}

int to_execute(char *dits, stack_t **top, const unsigned int idx)
{
	instruction_t opst[] = {
		{"add", element_add},
		{"stack", lib_stack},
		{"swap", to_swap},
		{"pall", to_pall},
		{"pop", to_pop},
		{"sub", to_sub},
		{"pint", to_pint},
		{"element_add", element_add},
		{"add_q", add_q},
		{"addnode", addnode},
		{"push", lets_push},
		{NULL, NULL}
	};
	unsigned int x = 0;
	char *op;
	char *arg;

	op = strtok(dits, " \n\t");
	if (op && op[0] == '#')
		return (0);
	arg = strtok(NULL, " \n\t");
	doremi.arg = arg;
	while (opst[x].opcode && op)
	{
		if (strcmp(op, opst[x].opcode) == 0)
		{
			opst[x].f(top, idx);
			return (0);
		}
		x++;
	}
	return (1);
}
