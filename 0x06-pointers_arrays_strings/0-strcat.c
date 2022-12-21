#include "main.h"

/**
 * _strcat - concatenates two strngs
 * @dest: pointer to the sting concatenated to
 * @src: pointer to source string
 * Return: the dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
