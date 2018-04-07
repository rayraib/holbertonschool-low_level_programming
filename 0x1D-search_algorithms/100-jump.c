#include "search_algos.h"
#include <math.h>
int find_value(int *array, int low, int high, int value);
/**
* jump_search - Perform jump search on an array to find given value
* @array: Array to search through for value
* @size: Size of the array
* @value: Value to search for
* Return: The index of value if found, else -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump;
	int idx;

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
			idx = find_value(array, i - jump, i, value);
			return (idx);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	printf("Value checked array[%lu] = [%d]\n", i - jump, array[i - jump]);
	return (-1);
}
/**
* find_value - Finds the index of a value in a sub-array
* @array: Pointer to the original array
* @low: Lower boundary of the sub-array
* @high: Higher boundary of the sub-array
* @value: The value to search for
* Return: The index of the value in the array if found, else -1
*/
int find_value(int *array, int low, int high, int value)
{
	int i;

	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
