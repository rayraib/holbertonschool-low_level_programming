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


	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
