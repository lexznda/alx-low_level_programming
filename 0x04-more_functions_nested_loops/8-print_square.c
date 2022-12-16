#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
