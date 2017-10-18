#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter
*                - on each element of an array
* @array: Pointer to memory location of an array
* @size: Size of the array
* @action: Pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
