#include "main.h"

/**
 * string_toupper - changes all lowercse of a sting uppercase
 * @s: string
 * Return: a char point
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		/* checking the Ascii value of the char to see if*/
		/* a lowwercase alphabet */
		if (s[i] >= 97 && s[i] <= 122)
		{
			/* if any is found, comvert it.*/
			/* There is a difference of 32 between each uppercase*/
			/*and its corresponding lowercase fellow */
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
