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

	for (n = 0; n <= 15; n++)
	{
		putchar((n % 10) + '0');

		if (n >= 10)
		{ 
			n = 97;
			for (n = 97; n < 103; n++)
			{
				putchar(n);
			}

		}
	}
	putchar('\n');
	return (0);
}
