#include "shell.h"

/**
 * exitf - Function to exit the shell.
 * @args: This is the input command tokenaized yet.
 * Return: Exit the shell.
 */
void exitf(char **args, char *line)
{
	int i = 0;

	for (i = 0; args[i] != NULL; i++)
	{
		free(args[i]);
	}
	free(args);
	/* free(line);*/
	(void)line;
	exit(EXIT_SUCCESS);
}
