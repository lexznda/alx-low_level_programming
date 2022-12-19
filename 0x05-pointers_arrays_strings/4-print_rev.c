#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: ppointer to the string
 * Return: void
 */

void print_rev(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != 0; i++)
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
