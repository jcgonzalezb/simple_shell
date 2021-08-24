#include "shell.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: the pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	dest = malloc((i * sizeof(str[0])) + 1);
	if (dest == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dest[j] = str[j];

	return (dest);
	free(dest);
}
