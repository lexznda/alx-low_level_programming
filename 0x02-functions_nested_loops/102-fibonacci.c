#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int sum = 0;
	long int first = 0, second = 1, i;

	printf("%li, ", first);
	for (i = 0; i < 49; i++)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

	}
	printf("%li", sum);
	return (0);
}
