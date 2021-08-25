#include "shell.h"

/**
 * selectfunction - Function that selects the type of function.
 * @args: This is the input command tokenaized yet.
 * Return: Pointer to the function that corresponds
 * to the format given as a parameter.
 */
void (*selectfunction(char **args))(char **args, char *line)
{
	int i = 0;

	order options[] = {
		{"exit", exitf},
		/*{"env", _env},*/
		{NULL, NULL}
	};

	while (options[i].program != NULL)
	{
		if (_strcmp(args[0], options[i].program) == 0)
		{
			return (options[i].f);
		}
		i++;
	}
	return (NULL);
}
