#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments it receives
 * @argc: argument account
 * @argv: arguments in n array
 * Return: num
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
