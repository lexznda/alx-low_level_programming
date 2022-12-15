#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int sum = 0;
	long int first = 0, second = 1, i;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		if (i == 49)
			break;
		printf("%li, ", sum);
		first = second;
		second = sum;

	}
	printf("%li ", sum);
	return (0);
}
