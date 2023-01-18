#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: array size
 * @cmp: function pointer
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			/* Getting the return value */
			check = cmp(array[i]);

			if (check == 1) /* Checking to see if the index was found */
				return (i);
		}
	}
	/* Shows that the index wasn't found or function were not true */
	return (-1);
}
