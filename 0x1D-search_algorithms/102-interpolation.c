#include "search_algos.h"
int find_value(int *array, size_t low, size_t high, int value);
/**
* array - Pointer to an array to parse for a value
* @size: Size of the array
* @value: Value to search for
* Return: If value found, index of value. Else, -1.
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	int x;

	low = 0;
	high = size - 1;
	x = find_value(array, low, high, value);
	return (x);
}
/**
*
*/
int find_value(int *array, size_t low, size_t high, int value)
{
	int x;
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));	
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
	{
		x = (find_value(array, (pos + 1), high, value));
	}
	else
	{
		x = (find_value(array, low, (pos - 1), value));
	}
	return (x);
}
