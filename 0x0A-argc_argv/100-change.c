#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimun number of coins to make change
 * @argc: arg count
 * @argv: arg array
 * Return: num
 */

int main(int argc, char *argv[])
{
	int change = 0, num;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	while (num > 0)
	{
		if (num >= 25)
			num = num - 25;
		else if (num >= 10)
			num = num - 10;
		else if (num >= 5)
			num = num - 5;
		else if (num >= 2)
			num = num - 2;
		else if (num >= 1)
			num = num - 1;
		change++;

	}
	printf("%d\n", change);
	return (0);
}
