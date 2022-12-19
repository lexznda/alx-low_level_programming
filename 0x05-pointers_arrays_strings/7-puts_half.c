#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != 0; i++)
	{
		length++;
	}
	for (i = length / 2; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
