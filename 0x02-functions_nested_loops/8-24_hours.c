#include "main.h"
/**
 * jack_bauer - Prints every hour of the day
 * Return: Void
 */
void jack_bauer(void)
{
	int i, j = 0, k = 0, l = 0, m = 0;

	for (i = 0; i < 1440; i++)
	{
		_putchar(j + '0');
		_putchar(k + '0');
		_putchar(':');
		_putchar(l + '0');
		_putchar(m + '0');
		_putchar('\n');
		m++;
		if (m > 9)
		{
			m = 0;
			l++;
		}
		if (l > 5)
		{
			l = 0;
			k++;
		}
		if (k > 3)
		{
			k = 0;
			j++;
		}
		if (j > 2)
			break;
	}
}
