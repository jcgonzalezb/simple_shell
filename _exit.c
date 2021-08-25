#include "shell.h"

/**
 * exitf - Function to exit the shell.
 * Return: Exit the shell.
 */
void exitf(char **args)
{
	int i = 0;

	for (i = 0; args[i] != NULL; i++)
	{
		free(args[i]);
	}
	free(args);
	exit(EXIT_SUCCESS);
}
