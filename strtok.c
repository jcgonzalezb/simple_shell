#include "shell.h"
#define TOK_DELIM " \t\r\n\a"

/**
 * tokenization - This function takes the command given by
 * the user and split it into tokens.
 * @line: Command given by the user.
 * Return: A array with pointers to the diferent tokens.
 */
char **tokenization(char *line)
{
	char *token;
	int p = 0;
	char **tokens = malloc(sizeof(char *) * 1024);

	if (!tokens)
		exit(EXIT_SUCCESS);

	token = strtok(line, TOK_DELIM);

	while (token != NULL)
	{
		tokens[p] = token;
		p++;

		token = strtok(NULL, TOK_DELIM);
	}
	tokens[p] = NULL;
	return (tokens);
}
