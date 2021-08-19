#include <string.h>
#include <stdio.h>
#include "shell.h"

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

char **main(char *line)

{
	char text[] = "hola:mundo:chao:chicos";
	const char *DELIM = ":";
	char *token;
	int bufsize =  LSH_TOK_BUFSIZE, p = 0;
	char **tokens = malloc(bufsize *sizeof(char*));

	token = strtok(text, DELIM);

	while (token != NULL)
	{
		tokens[p] = token;
		p++;

		printf("%s\n", token);
		token = strtok(NULL, DELIM);
		/*token = strtok(NULL, LSH_TOK_DELIM);*/
	}
	tokens[p] = NULL;
	return (tokens);
    //ls -a -l ->tokenizar!
    //bin/usr:bin:games/usr ->tokenizar!
}
