#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 4 && i != 2)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
