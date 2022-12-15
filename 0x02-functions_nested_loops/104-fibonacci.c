#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int sum = 0;
	long int first = 0, second = 1, i;

	for (i = 0; i < 98; i++)
	{
		sum = first + second;
		if (i == 97)
			break;
		printf("%li, ", sum);
		first = second;
		second = sum;

	}
	printf("%li\n", sum);
	return (0);
}
