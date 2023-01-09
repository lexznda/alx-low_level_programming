#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of agruments passed to it
 * @argc: number of argument
 * @argv: arguments in a array
 * Return: num
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc - 1)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
