#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "shell.h"

/**
 * prompt - prompter.
 * @data: data
 * Return: Result
 */
char *read_c(void)
{
	char *line = NULL;
	ssize_t lineSize = 0;

	if (getline(&line, &lineSize, stdin) == -1)
		exit(EXIT_SUCCESS);

	/*charactersread = getline(&line, &lineSize, stdin);+/

		/* write(STDOUT_FILENO, line, charactersread); */
		/*tokens*/ 
	return (line);
}
