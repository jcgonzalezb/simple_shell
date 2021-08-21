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
	char *line;
	char **environment;
	char *prompt = "$ ";
	char **args;
	char *matchin;
	int status;
	void (*builtin) (char**);
	char *checkin;

	do {
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, _strlen(prompt));

		line = read_c();
		args = tokenization(line);

		/*if (args[0] == NULL)*/
		/*	return (1);*/

		builtin = selectfunction(args);

		if (builtin == NULL)
		{
			printf("Search in the path");
			environment = nobuiltin();
			checkin = matchin(args);
		}
		else
			builtin(args);
		/*status = builtin(args);*/
		/*status = int(builtin(char**))*/

		free(line);
		free(args);

	} while (1);
}
