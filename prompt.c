#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

/**
 * prompt - prompter.
 * @data: data
 * Return: Result
 */
void prompt(void)
{
	char *line = NULL;
	char *prompt = "$ ";
	char **args = NULL;
	int status = 0;
	char *pathValue = NULL;
	char *copy_path = NULL;
	char **dividedPath = NULL;

	void (*builtin) (char**);

	do {
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, _strlen(prompt));

		line = read_c();
		if (line[0] == '\n')
			continue;

		args = tokenization(line);

		if (args[0] == NULL)
			continue;

		builtin = selectfunction(args);

		if (builtin == NULL)
		{
			pathValue = getvarfromenv("PATH");
			copy_path = strdup(pathValue);
			dividedPath = tokenizepath(copy_path);
			stat_command(args, dividedPath);
		}
		else
			builtin(args);
		/*status = builtin(args);*/
		/*status = int(builtin(char**))*/

		/*free(line);
		free(args);*/

	} while (1);
}
