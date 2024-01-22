#include "monty.h"
#include <stdio.h>
atoxz doremi = {NULL, NULL, NULL, 0, NULL};
/**
 */
int main(int argc, char *argv[])
{
	FILE *bagg;
	char *dits;
	ssize_t line = 1;
	unsigned int idx = 0;
	stack_t *top = NULL;
	(void)argc;

	if (argc != 2)
	{
		fprintf(stderr, "monty file\n");
		exit(EXIT_FAILURE);
	}
	bagg = fopen(argv[1], "r");
	doremi.bagg = bagg;

	if (!bagg)
	{
		perror("Unable to open file");
		exit(EXIT_FAILURE);
	}
	while (line > 0)
	{
		dits = malloc(MAX_LINE_SIZE);
		if (dits == NULL)
		{
			fprintf(stderr, "Memory allocation error\n");
			exit(EXIT_FAILURE);
		}
		if (fgets(dits, MAX_LINE_SIZE, bagg) == NULL)
		{
			free(dits);
			break;
		}
		doremi.dits = dits;
		dits[line - 1] = '\0';
		to_execute(dits, &top, idx);
		free(dits);
	}
	lib_stack(&top, idx);
	fclose(bagg);
	return(0);
}
