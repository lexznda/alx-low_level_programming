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


	/* looping through the dest string to get all the strings*/
	for (i = 0; dest[i] != 0; i++)
	{
	}
	/* Looping through the src*/
	for (j = 0; src[j] != 0; j++)
	{
		/* checking to see if we have reached the nth element */
		if (j < n)
		{
			/* concatenate src to dest as long as we not yet at n */
			dest[i] = src[j];
			i++;
		}
	}
	return (dest);
}
