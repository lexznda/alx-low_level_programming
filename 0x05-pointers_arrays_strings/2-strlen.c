#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: the legnth
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != 0; i++)
	{
		count++;
	}
	return (count);
}
