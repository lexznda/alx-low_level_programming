#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: char pointer
 * Return: Pointer
 */

char *rot13(char *s)
{
	int i, j;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char convert[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alp[j])
			{
				s[i] = convert[j];
				break;
			}
		}
	}
	return (s);
}
