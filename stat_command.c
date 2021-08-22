#include "shell.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
extern char **environ;

/**
 * stat_command - This function do the stat, PID & PPID,
 * and find & excecute the command in the path.
 * @args: This is the input command tokenaized yet.
 * @dividePath: These are all the paths tokenaized yet.
 */
int stat_command(char **args, char **dividedPath)
{
	int i = 0, j = 0, x = 0;
	int execute = 0;
	int status = 0;
	int pid = 0;
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
			pid = fork();

			if (pid == -1)
			{
				perror("Error:");
				return (1);
			}
			if (pid == 0)
			{
				execute = execve(buffer, args, environ);
				if (execute == -1)
					exit(98);
			}
			else
			{
				j = 1;
				wait(&status);
				/*return(status);*/
			}
		}
	}
	return (0);
}
