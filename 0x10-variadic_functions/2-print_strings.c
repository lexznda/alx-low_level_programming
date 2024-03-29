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
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (!(str))
			printf("(nil)");
		else if (i == (n - 1) || (!separator))
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	printf("\n");

	va_end(ap);

}
