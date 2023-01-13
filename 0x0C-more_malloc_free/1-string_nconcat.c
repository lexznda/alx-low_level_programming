#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: strings
 * @s2: strings
 * @n: number
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != 0; i++)
	{
	}

	for (j = 0; s2[j] != 0; j++)
	{
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; s1[i] != 0; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != 0 && j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
