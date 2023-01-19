#include "3-calc.h"

/**
 * get_op_func - choose the operator to be used
 * @s: char pointer
 * Return: int
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0) /* compare the strings */
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
