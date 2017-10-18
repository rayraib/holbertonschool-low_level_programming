#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - Searches for an integer
* @array: Pointer to a memory location with an array of inegers
* @size: Size of the array
* @cmp: Pointer to a function
* Return: Index of the first element for if integer found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int h, i;

	if  (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		h = cmp(array[i]);
		if (h != 0)
			return (i);
	}
	return (-1);
}
