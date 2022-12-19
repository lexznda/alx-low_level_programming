#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
	int i, length = 0, j = 0;
	char c;

	for (i = 0; s[i] != 0; i++)
	{
		length++;
	}
	for (i = length - 1; j < i; j++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i--;
	}
}
