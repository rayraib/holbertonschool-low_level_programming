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
	size_t i, new_size, min_val;
	int max, x, min;
	int *new_array;

	min = max = array[0];
	for (i = 0; i < size; i++)
	{
		if (min > array[i])
			min = array[i];
		if (max < array[i])
			max = array[i];
	}
	min_val = min;
	new_size = max + 1;
	/*allocate memory for the new array*/
	new_array = malloc(sizeof(int) * new_size);
	if (new_array == NULL)
		return;
	/*set the new array to be 0 in each index*/
	for (i = 0; i < new_size; i++)
		new_array[i] = 0;
	/*set how many of the values are there*/
	for (i = 0; i < size; i++)
	{
		x = array[i];
		new_array[x] += 1;
	}
	/*each index value is sum of it's and it's prev index's value*/
	for (i = min; i <= new_size; i++)
		new_array[i] += new_array[i - 1];
	print_array(new_array, new_size);
	/*shift the array to the right by one index*/
	for (i = new_size - 1; i > min_val; i--)
		new_array[i] = new_array[i - 1];
	if (min != 0)
		new_array[min] = new_array[min - 1];
	else
		new_array[min] = 0;
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
		/*if i is the last index of the new_array*/
		if (i == new_size - 1)
		{
			/*assign remaining index in og array the index value*/
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
