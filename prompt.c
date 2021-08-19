#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "shell.h"

/**
 * prompt - prompter.
 * @data: data
 * Return: Result
 */
void main(void)
{
	char *line = NULL;
	char *prompt = "$ ";
	size_t lineSize = 0;
	int charactersread = 0;

	do
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, _strlen(prompt));

		if (getline(&line, &lineSize, stdin) == -1)
			exit(EXIT_SUCCESS);

		charactersread = getline(&line, &lineSize, stdin);

		/* write(STDOUT_FILENO, line, charactersread); */
		/*tokens*/

	}
	while (1);

}
