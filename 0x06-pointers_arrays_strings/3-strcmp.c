#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string one
 * @s2: string two
 * Return: a number
 */

int _strcmp(char *s1, char *s2)
{
	int status_num = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		status_num = 0;
	else if (*s1 > *s2)
		status_num = 15;
	else
		status_num = (-15);
	return (status_num);
}
