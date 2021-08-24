#include "shell.h"

void exitf(char **args)
{
	/*char *line;*/
	/*printf("This is a exit");*/
	int i;
	for (i = 0; args[i] != NULL; i++)
		{
			free(args[i]);
		}
	free(args);
	/*free(line);*/
	exit(EXIT_SUCCESS);
	/*return (0);*/
}
