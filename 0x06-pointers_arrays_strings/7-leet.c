#include "main.h"

/**
 * leet - changes letters in a stringto numbers using 1337
 * @s: point to the string
 * Return: th pointer
 */

char *leet(char *s)
{
	int lower_alp[] = {97, 101, 111, 116, 108};
	int higher_alp[] = {65, 69, 79, 84, 76};
	int new[] = {52, 51, 48, 55, 49};
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == higher_alp[j] || s[i] == lower_alp[j])
			{
				s[i] = new[j];
			}
		}
	}
	return (s);
}
