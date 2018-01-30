#include "sort.h"
void swap_values(int *array, int, int, int gap);
int find_gap(size_t size);
/**
* shell_sort - Sort an array of integers in ascending ordr using Shell sort
* @array: Array of integers to sort
* @size: Size of the array to sort
*/
void shell_sort(int *array, size_t size)
{
	size_t gap;
	size_t i;
	size_t j;
	size_t k;

	if (size < 2)
		return;
	/*get initial, largest gap size*/
	gap = find_gap(size);
	i = 0;
	while (gap > 0)
	{
		/*k starts at same index as i*/
		k = i;
		j = k + gap;
		while (j < size)
		{
			swap_values(array, k, j, gap);
			k = j;
			j = j + gap;
		}
		i++;
		/*check if all the elements in the gap range is compared*/
		if (i >= gap)
		{
			/*decrement gap to the next smaller gap size*/
			gap = (gap - 1) / 3;
			/*re-assign i to index 0 to start over*/
			i = 0;
			print_array(array, size);
		}

	}

}
/**
* find_gap - find the gap value for shell sort
* @size: Size of an array to be sorted
* Return: gap value
*/
int find_gap(size_t size)
{
	size_t gap;

	gap = 1;
	while ((gap * 3) + 1 < size)
	{
		gap = gap * 3 + 1;
	}
	return (gap);
}
/**
* swap_values - swap values between two indexes of array
* @array: Array with values to be swapped
* @left: Index of the first value to swap
* @right: Index of the second value to swap
* @gap: gap value to sort with
*/
void swap_values(int *array, int left, int right, int gap)
{
	int tmp;

	while (left >= 0)
	{
		if (array[left] > array[right])
		{
			tmp = array[left];
			array[left] = array[right];
			array[right] = tmp;
		}
		right = left;
		left = left - gap;
	}
}
