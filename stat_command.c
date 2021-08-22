#include "shell.h"
extern char **environ;

/**
 * stat_command - This function do the stat, PID & PPID,
 * and find & excecute the command in the path.
 * @args: This is the input command tokenaized yet.
 * @dividedPath: These are all the paths tokenaized yet.
 * Return: Zero in case completes the task successfully.
 */
int stat_command(char **args, char **dividedPath)
{
	int i = 0, j = 0, x = 0;
	char buffer[1024];
	struct stat sb;

	for (i = -1; i == -1 || dividedPath[i] != NULL; i++)
	{
		for (x = 0; x < 1024; x++)
			buffer[x] = '\0';
		if (i != -1)
		{
			_strncat(buffer, dividedPath[i]);
			_strncat(buffer, "/");
		}
		_strncat(buffer, args[0]);

		if ((stat(buffer, &sb) == 0) && j != 1)
		{
			launch(buffer, args, environ);
		}
	}
	return (0);
}
