#include "shell.h"

/**
 * _strlen- returns the length of a string
 * @s : string.
 * Return: Length of a string
 */
int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}
