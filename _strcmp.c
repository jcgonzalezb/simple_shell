#include "shell.h"

/**
 * _strcmp -  function should work exactly like strcmp
 * @s1: String 1
 * @s2: String 2
 * Return: 0 if the strings are the same
 * Different to zero if the strings are different.
 */

int _strcmp(char *s1, char *s2)
{
	int indx;

	for (indx = 0; s1[indx] != '\0' && s2[indx] != '\0'; indx++)
	{
		if (s1[indx] != s2[indx])
		{
			return (s1[indx] - s2[indx]);
		}
	}
	return (0);
}
