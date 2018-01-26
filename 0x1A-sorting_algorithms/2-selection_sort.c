#include "sort.h"
/**
* selection_sort - sort an array of integers in ascending order
* @array: array to sort
* @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int key, sm_idx;
	for (i = 0; i < size; i++)
	{
		j = i + 1;
		key = array[i];
		while (j < size)
		{
			/*check if key is the smallest number*/ 
			if (key > array[j])
			{
				key = array[j];
				sm_idx = j;
			}
			j++;
		}
		/* if key is not the smallest num, swap with the smallest num*/
		if (key != array[i])
		{
			array[sm_idx]  = array[i];
			array[i] = key;
			print_array(array, size);
		}
	}
}
