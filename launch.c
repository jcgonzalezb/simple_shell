#include "shell.h"
extern char **environ;

/**
 * launch - Function that starts the execution process.
 * @args: This is the input command tokenaized yet.
 * @buffer: Buffer.
 * @environ: Directories to the executable commands.
 * Return: Pointer to the function that corresponds
 * to the format given as a parameter.
 */
int launch(char *buffer, char **args, char **environ)
{
	int j = 0;
	int execute = 0;
	int status = 0;
	int pid = 0;

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
