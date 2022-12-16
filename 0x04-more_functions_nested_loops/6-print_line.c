#include "main.h"
/**
 * print_line - Draws a striaght line in the terminal
 * @n: number of line character
 * Return: Void
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
}