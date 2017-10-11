#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - allocate memory space for a 2 dimensional array of integers
* @width: The number of elements inside each array
* @height: The number of elements the array
* Return: Pointer to the arrays; if failure, NULL;
* if width or height less than or 0, NULL
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc((width) * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	}
	return (ptr);
}
