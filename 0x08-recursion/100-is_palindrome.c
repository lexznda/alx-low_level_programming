#include "main.h"

/**
 * _string_lenght - gets the string lenght
 * @s: the string
 * Return: int
 */

int _string_lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _string_lenght(s + 1));
}

/**
 * compare - compares string index
 * @s: the string
 * @n1: index 1
 * @n2: index 2
 * Return: int
 */

int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: pointer to the string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _string_lenght(s) - 1));
}
