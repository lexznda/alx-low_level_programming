#include <stdio.h>
/**
 * main - computes and prints
 * Return: Al2ways 0
 */
int main(void)
{
	int i, n = 1024;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		else if (i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
