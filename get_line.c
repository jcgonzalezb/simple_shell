#include "shell.h"

/**
 * read_c - This function reads the command given.
 * Return: If the command is erroneous, the shell
 * closes. Otherwise, the function returns the same
 * line given.
 */
char *read_c(void)
{
	char *line = NULL;
	size_t lineSize = 0;

	if (getline(&line, &lineSize, stdin) == -1)
		exit(EXIT_SUCCESS);

	if (line[0] == '\n')
		return (line);

	/*charactersread = getline(&line, &lineSize, stdin);*/

		/* write(STDOUT_FILENO, line, charactersread); */
		/*tokens*/
	return (line);
}
