#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: The number
 * Return: Returns the number
 */
int print_last_digit(int n)
{
	int last_number, a;

	if (n < 0)
	 {
		 a = n * -1;
		 last_number = a % 10;
		 _putchar(last_number + '0');
		 return (last_number);
	 }
	else
	{
		last_number = n % 10;
		_putchar(last_number + '0');
		return (last_number);
	}
}
