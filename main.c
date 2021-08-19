#include "shell.h"
#define TESTING_TOKENIZATION
/**
 *main - Program that reads the command line and executes a command
 *Return: If success 0, otherwise -1
 *@void: void
 */

int main()
{

	void (builtin)(char **line);
	char *line;
	char *a;

	while (1)
	{
		prompt(line);
		if (line [0] == '\n')
		{
			prompt(line);
		}
		else
		{
			a = tokenization(line);

			builtin = selectfunction(a);

			if (builtin == NULL)
			{
				printf("Search in the path");
			}
			else
			{
				builtin(a);
			}
		}


	}
	return(0);
}
