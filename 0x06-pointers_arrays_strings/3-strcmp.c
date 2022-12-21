#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string one
 * @s2: string two
 * Return: a number
 */

int _strcmp(char *s1, char *s2)
{
	int status_num = 0, n = 0;

	while (status_num == 0)
	{
		if (s1[n] != '\0' && s2[n] != '\0')
		{
			status_num = s1[n] - s2[n];
			n++;
		}
		else
			break;
	}
	return (status_num);
}
