#include "variadic_functions.h"

/**
 * print_strings - prints string followed by a new line
 * @separator: string between each string
 * @n: number of string passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator)
	{
		va_start(ap, n);
	}

}
