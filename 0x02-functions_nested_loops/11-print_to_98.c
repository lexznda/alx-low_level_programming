#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number
 * Return: Void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 97)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
