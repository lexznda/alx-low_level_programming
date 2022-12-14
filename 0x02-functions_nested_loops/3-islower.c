#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: character to be checked
 * Return: 0 for lowercase and 1 for not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
