#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointer to a string of 0's and 1 chars
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;
	int i, base = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			dec_num += base;
		base *= 2;
	}
	return (dec_num);
}
