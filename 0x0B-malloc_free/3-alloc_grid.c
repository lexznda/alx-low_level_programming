#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a a-dim array of integers
 * @width: the widtet
 * @height: the height
 * Return: a double pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height < 1 || width < 1)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
