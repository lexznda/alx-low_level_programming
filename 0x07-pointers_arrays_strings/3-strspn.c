#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: check
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, bool;

	for (i = 0; s[i] != 0; i++)
	{
		bool = 1;

		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
