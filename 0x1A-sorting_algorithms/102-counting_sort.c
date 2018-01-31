#include "sort.h"

void set_sort_value(int *array, int *new_array, size_t new_size, size_t size);
/**
* counting_sort - Sort an array of integers in ascending order using
*		counting sort algorithm
* @array: Pointer to array to sort
* @size: Size of the array
*/
void counting_sort(int *array, size_t size)
{
	size_t i, new_size;
	int min, max, x;
	int *new_array;

	min = max = array[0];
	for (i = 0; i < size; i++)
	{
		if (min > array[i])
			min = array[i];
		if (max < array[i])
			max = array[i];
	}
	new_size = (max - min) + 1;
	new_array = malloc(sizeof(int) * new_size);
	if (new_array == NULL)
		return;
	for (i = 0; i < new_size; i++)
		new_array[i] = 0;
	for (i = 0; i < size; i++)
	{
		x = array[i];
		new_array[x] += 1;
	}
	for (i = 1; i < new_size; i++)
		new_array[i] += new_array[i - 1];
	for (i = new_size - 1; i > 0; i--)
		new_array[i] = new_array[i - 1];
	new_array[0] = 0;
	print_array(new_array, new_size);
	set_sort_value(array, new_array, new_size, size);
}

/**
* set_sort_value - Reset the original array in sorted order
* @array: Original array to be reset
* @new_array: Array of ints the original array will be reset based on
* @new_size: Size of the new array
* @size: size of the original array
*/
void set_sort_value(int *array, int *new_array, size_t new_size, size_t size)
{
	size_t i, current_val, next_val;

	for (i = 0; i < new_size; i++)
	{
		current_val = new_array[i];
		if (i == new_size - 1)
		{
			while (current_val < size)
			{
				array[current_val] = i;
				current_val++;
			}
		}
		else
		{
			next_val = new_array[i + 1];
			while (current_val < next_val)
			{
				array[current_val] = i;
				current_val++;
			}
		}
	}
	free(new_array);
}
