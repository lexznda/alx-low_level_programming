#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int sum = 0;
	int first = 0, second = 1, i;

	printf("%d, ", first);
	for (i = 0; i <= 50; i++)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

	}
	return (0);
}
