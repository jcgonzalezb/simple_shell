#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

char *getvarfromenv(char *varname)
{
	int i = 0;
	int j = 0;

	for (; environ[i] != NULL; i++)
	{
		for (j = 0; varname[j] == environ[i][j]; j++)
		{
		}
		if (varname[j] == '\0' && environ[i][j] == '=')
		{
			/*printf("%c\n", environ[i][j]);*/
			return (environ[i] + j + 1);
		}
	}
	return (NULL);
}

char **tokenizepath(char *string)
{
	char **tokenized = NULL;
	size_t i = 0;

	tokenized = malloc(sizeof(char *) * 1024);
	tokenized[0] = strtok(string, ":");
	while (tokenized[i])
	{
		i++;
		tokenized[i] = strtok(NULL, ":");
	}
	return (tokenized);
}
