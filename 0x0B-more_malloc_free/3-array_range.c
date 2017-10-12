#include "holberton.h"
#include <stdlib.h>
/**
* array_range - Creates an array of integers
* @min: The integer to start initializing with
* @max: The upper limit for the array initialization
* Return: Succes, pointer to the newly created array
*         If malloc fail, or min is greater than max, return NULL
*/
int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (min > max)
		return (NULL);
	n = max - min;
	ptr = malloc((n + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
