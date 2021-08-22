#include "shell.h"
/**
 *_strncat - This function concatenates two strings.
 *@dest: First string
 *@src: Second string
 *Return: always is (dest)
 */

char *_strncat(char *dest, char *src)

{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
