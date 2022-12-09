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
	int i, j, k;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = i + 1; j < 10; j++)
			{
				k = j;
				putchar((n % 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				if (j == 9)
				{
					k  = 0;
				}
				putchar((i % 10) + '0');
				putchar((k % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
