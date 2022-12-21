#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: dest pointer
 * @src: source point
 * @n: byte number
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; src[j] != 0; j++)
	{
		if (j == n - 1)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
