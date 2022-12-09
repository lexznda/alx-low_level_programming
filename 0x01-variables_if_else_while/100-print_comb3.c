#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 success
 *
 */
int main(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		i = n + 1;

		for (i = i; i < 10; i++)
		{
			putchar((n % 10) + '0');
			putchar((i % 10) + '0');
			if (n == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
