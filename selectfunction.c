#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "shell.h"

/**
 * selectfunction - Function that prints anything.
 * Return: Pointer to the function that corresponds
 * to the format given as a parameter.
 */

void (*selectfunction(char **args))(char **args)
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
