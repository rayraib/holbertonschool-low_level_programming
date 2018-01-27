#include "sort.h"
int swap_values(int *array, int first, int second, size_t size);
int check_if_sorted(int *array, size_t size);
int bub_sort(int *array, size_t beg, size_t end, size_t size, int count);
void quick_sort(int *array, size_t size)
{
	int sorted_flag = 0;
	int swap_flag = 0;
	int pivot;
	size_t beg, end, i, j;
	int count = 0;

	beg = 0;
	end = size - 1;
	/*while array is not sorted*/
	while (sorted_flag == 0)
	{
		j = beg;
		i = j - 1;
		pivot = array[end];
		/*loop from beg to end*/
		for (j = beg; j < end; j++)
		{
			/* check if value at each index is less that pivot*/
			if (array[j] < pivot)
			{
				/*swap smaller than pivot element to the left */
				/* of elements that are bigger than pivot*/
				i++;
				swap_flag = swap_values(array, i, j, size);
			}
		}
		i++;
		/*swap pivot to the index after all the smaller elements*/
		swap_flag = swap_values(array, i, end, size);
		if (swap_flag == 1)
		{
			/*move end to be at the index where pivot was moved*/
			end = i;
		}
		else
		{
			/*check if the entire array is sorted*/
			if (check_if_sorted(array, size) == 1)
			{
				sorted_flag = 1;
			}
			else if ( (end - beg) < 3)
			{
				if (bub_sort(array, beg, end, size, count) == 1)
					print_array(array, size);
				beg = end + 1;
				end = size - 1;
			}
			else
			{
				end = end - 1;
				/*prev_end = end;*/
			}
		} 
	} 
}
/**
* swap_values - Swap values at two given indexes of an array 
* @array: Array with elements to swap 
* @first: Index of first element to swap
* @second: Index of the second element to swap
*/
int swap_values(int *array, int first, int second, size_t size)
{
	int tmp;

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
int check_if_sorted( int *array, size_t size)
{
	size_t x;

	for (x = 0; x < size - 1; x++)
	{
		/*bigger number in front means NOT sorted*/
		if (array[x] > array[x + 1])	
			return (0);
	}
	return (1);
}

/**
* bub_sort - sort an array of integers in an ascending order using
*               bubble sort algorith
* @array: the array to be sorted
* @size: size of the array
* @beg: Start index for array range to bubble sort 
* @end: End index for array range to bubble sort
* Return: 1 if element swapped, else 0
*/
int bub_sort(int *array, size_t beg, size_t end, size_t size, int count)
{
	int swap_flag, tmp;
	size_t i;

	(void)count;
	(void)size;
	swap_flag = 1;
	while(swap_flag == 1)
	{
		swap_flag = 0;
		/* loop from beg partion to end of partition*/
		for (i = beg; i < end; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];	
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap_flag = 1;
				printf("bs\n");
			}
		}
		/*no swaps were made */
		if (swap_flag == 0)
			return (0);
	}
	return (1);
}
