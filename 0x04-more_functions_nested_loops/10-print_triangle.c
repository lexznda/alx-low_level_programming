#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always
 */

void print_triangle(int size)
{
	int i = 0, j, k, temp;

	if (size <= 0)
		_putchar('\n');
	else
	{
		temp = size;
		while (i < size)
		{
			for (j = temp - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			temp--;
			i++;
		}
	}
}
