#include "main.h"

/**
 * _strncpy - copies  astring
 * @dest destination pointer
 * @src: source pointer
 * @n: no of bytes to be copied.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
