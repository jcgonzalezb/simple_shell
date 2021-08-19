#include <string.h>
#include <stdio.h>
#include "shell.h"

#define TOK_BUFSIZE 1024
#define TOK_DELIM " \t\r\n\a"

char **tokenization(char *line)

{
	char *token;
	int bufsize =  TOK_BUFSIZE, p = 0;
	char **tokens = malloc(bufsize * sizeof(char *));

	if (!tokens)
		exit(EXIT_SUCCESS);

	token = strtok(line, TOK_DELIM);

	while (token != NULL)
	{
		tokens[p] = token;
		p++;

		printf("%s\n", token);
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[p] = NULL;
	return (tokens);
}
