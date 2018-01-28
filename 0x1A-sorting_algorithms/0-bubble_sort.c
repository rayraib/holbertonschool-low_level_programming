#include "sort.h"

/**
* bubble_sort - sort an array of integers in an ascending order using
*               bubble sort algorith
* @array: the array to be sorted
* @size: size of the array
*/
void bubble_sort(int array, size_t size)
{
	int swap_flag, tmp;
	size_t i;

	if (size < 2)
		return;
	swap_flag = 1;
	while (swap_flag == 1)
	{
		swap_flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap_flag = 1;
				print_array(array, size);
			}
		}
	}
}
