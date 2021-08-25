#include "shell.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destiny
 * @src: source
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0; /* couters to arrays */

	while (dest[i] != '\0')
		i++;
	for (; (dest[i] = src[j]) != '\0';)
	{
		i++;
		j++;
	}
	return (dest);
}

/**
 * _perror - This function do the stat, PID & PPID,
 * and find & excecute the command in the path.
 * @shell_name: Name of the shell.
 * @command_name: Name of the command.
 * Return: Zero in case completes the task successfully.
 */

void _perror(char *shell_name, char *command_name)
{
	int i = 0;
	char error[1024];

	memset(error, 0, 1024);
	_strcat(error, shell_name);
	_strcat(error, ": ");
	_strcat(error, "1: ");
	_strcat(error, command_name);
	_strcat(error, ": ");
	_strcat(error, "not found\n");

	for (i = 0; error[i] != '\0'; i++)
	{}

	write(STDERR_FILENO, &error, i);
}
