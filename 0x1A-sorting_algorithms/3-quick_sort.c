#include "sort.h"
int swap_values(int *array, size_t first, size_t second, size_t size);
int check_if_sorted(int *array, size_t beg, size_t end);
int part_array(int *array, size_t beg, size_t end, size_t size);  
void quick_sort(int *array, size_t size)
{
	size_t beg, end;

	beg = 0;	
	end = size - 1;
	part_array(array, beg, end, size);
}
/**
* part_array - partion each array as lesser and greater than pivot value
* @beg:
*/
int part_array(int *array, size_t beg, size_t end, size_t size)  
{
	int pivot, swap_flag = 0;
	size_t i, j;

	pivot = array[end];
	j = beg;
	i = j - 1;
	for (j = beg; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_flag = (swap_values(array, i, j, size));
		}
	}
	i++;
	swap_flag = (swap_values(array, i, j, size));
	if (swap_flag == 0)
	{
		if (check_if_sorted(array, beg, end) == 1)	
			return (1);
		end = end - 1;
		part_array(array, beg, end, size);
	}
	else
	{
		part_array(array, beg, i, size);
		part_array(array, i, end, size);
	}
	return (1);

}
/**
* swap_values - Swap values at two given indexes of an array 
* @array: Array with elements to swap 
* @first: Index of first element to swap
* @second: Index of the second element to swap
*/
int swap_values(int *array, size_t first, size_t second, size_t size)
{
	int tmp = 0;

	/* only swap if the values are at different index*/
	if (first != second)
	{
		tmp = array[first];
		array[first] = array[second];
		array[second] = tmp;
		print_array(array, size);
		return (1);
	}
	return (0);
}
/**
* check_if_sorted - check if an array of int is sorted in ascending order
* @array: array to check
* @size: size of array
* Return: 1 if sorted, Else 0
*/
int check_if_sorted( int *array, size_t beg, size_t end)
{
	size_t x;

	/*only check in the range of index beg to index end in the array*/
	for (x = beg; x < end; x++)
	{
		/*bigger number in front means NOT sorted*/
		if (array[x] > array[x + 1])	
			return (0);
	}
	return (1);
}
