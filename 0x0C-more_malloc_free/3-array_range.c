#include "main.h"

/**
 * array_range - creates an array on integers
 * @min: min val
 * @max: max val
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, memory_space;

	if (min > max)
		return (NULL);

	memory_space = (max + 1) - min;
	ptr = malloc(sizeof(*ptr) * memory_space);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < memory_space; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
