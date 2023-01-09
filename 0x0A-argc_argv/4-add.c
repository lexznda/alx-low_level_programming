#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: ags count
 * @argv: aargs array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0, j;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
