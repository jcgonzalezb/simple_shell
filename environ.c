#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "shell.h"

extern char **environ;

char *getvarfromenv(char *varname)
{
	char *result;
	int i = 0;
	int j = 0;

	for (; environ[i] != NULL; i++)
	{
		for (j = 0; varname[j] == environ[i][j]; j++)
		{
		}
		if (varname[j] == '\0' && environ[i][j] == '=')
		{
			printf("%c\n", environ[i][j]);
			result = &environ[i][j + 1];
		}
	}
	return (result);
}

char **tokenize(char *string)
{
	char *copy, **tokenized;
	size_t i = 0;

	tokenized = malloc(1024);
	tokenized[0] = strtok(string, ":");
	while (tokenized[i])
	{
		i++;
		tokenized[i] = strtok(NULL, ":");
	}
	printf("Test case: %s\n", tokenized[0]);
	return (tokenized);
}

int main()
{
	char *pathValue = getvarfromenv("PATH");
	printf("%s\n", pathValue);

	char *copy_path = _strdup(pathValue);
	char **dividedPath = tokenize(copy_path);

	printf("First path direction is: %s\n", dividedPath[0]);
}
