#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 * Return: the int
 */

int _atoi(char *s)
{
	int index = 0, j;
	unsigned int res = 0;
	int sign = 1;
	char now;

	while (s[index] != '\0')
	{
		now = s[index];
		if (now == '-')
			sign *= -1;
		if (now >= '0' && now <= '9')
		{
			j = index;
			while (s[j] >= 48 && s[j] <= 57)
			{
				res = (res * 10 + s[j] - '0');
				j++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}
