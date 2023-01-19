#include "3-calc.h"

/**
 * main - Entry
 * @argc: argument count
 * @argv: array of arg
 * Return: 1 0r -1
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptr = (argv[2]);

	if (!get_op_func(ptr))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(ptr)(num1, num2));
	return (0);
}
