#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - Frees two dimensional grid
* @grid: Pointer to a pointer to an int
* @height: The size of the array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
			return;
		if (height == 0)
			return;
		free(grid[i]);
	}
}
