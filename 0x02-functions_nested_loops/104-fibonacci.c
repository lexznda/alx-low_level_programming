#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int sum = 0;
	unsigned long int first = 0, second = 1, i;

	for (i = 0; i < 98; i++)
	{
		sum = first + second;
		if (i == 97)
			break;
		printf("%lu, ", sum);
		first = second;
		second = sum;

	}
	printf("%lu\n", sum);
	return (0);
}
