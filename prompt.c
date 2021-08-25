#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

/**
 * main - main section of the shell program.
 * @argc: Number of arguments.
 * @argv: Values of arguments.
 * Return: Result
 */
int main(int argc, char **argv)
{
	char *line = NULL, *prompt = "$ ", *pathValue = NULL, *copy_path = NULL;
	char **args = NULL, **dividedPath = NULL;
	void (*builtin)(char **);
	(void)argc;

	do {
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, _strlen(prompt));

		line = read_c();
		args = tokenization(line);
		if (args[0] == NULL)
			continue;

		builtin = selectfunction(args);
		if (builtin == NULL)
		{
			pathValue = getvarfromenv("PATH");
			copy_path = _strdup(pathValue);
			dividedPath = tokenizepath(copy_path);
			if (stat_command(args, dividedPath) == -1)
				_perror(argv[0], args[0]);
			}
		else
		{
			exitf(args);
		}
		free(dividedPath);
		free(copy_path);
		free(args);
		free(line);

	} while (1);
}
