#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on array elements
 * @array: the array
 * @size: array size
 * @action: pointer function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
