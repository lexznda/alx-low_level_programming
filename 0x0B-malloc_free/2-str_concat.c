#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (i = i; s2[i] != 0; i++)
	{
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != 0; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != 0; j++, i++)
	{
		ptr[i] = s2[j];
	}
	return (ptr);
}
