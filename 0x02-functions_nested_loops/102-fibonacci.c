#include <stdio.h>
/**
 * main - Entry point
 * Return 0
 */

int main(void)
{
	int first = 0, second = 1, i;

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", first);
		printf("%d, ", second);
		first = second;
		second = first + second;

	}
}
