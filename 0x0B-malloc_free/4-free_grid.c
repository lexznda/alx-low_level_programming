#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid
 * @grid: double pointer to the grid
 * @height: grid height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
