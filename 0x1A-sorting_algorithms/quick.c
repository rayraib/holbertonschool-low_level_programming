#include "sort.h"
int swap_values(int *array, int first, int second, size_t size);
int check_if_sorted(int *array, size_t size);
int bub_sort(int *array, size_t beg, size_t end, size_t size, int count);
void quick_sort(int *array, size_t size)
{
	int sorted_flag = 0;
	int swap_flag = 0;
	int pivot;
	size_t beg, end, i, j, prev_end;
	int count = 0;

	beg = 0;
	end = size - 1;
	while (sorted_flag == 0)
	{
		j = beg;
		i = j - 1;
		
		/*printf("value of i: %lu\n", i);
		printf("value of j before for loop line 20: %lu\n", j);*/
		pivot = array[end];
		for (j = beg; j < end; j++)
		{
		/*	printf("pivot = %u\n", pivot);*/
			if (array[j] < pivot)
			{
				i++;
				swap_flag = swap_values(array, i, j, size);
				count++;
			}
		}
		i++;
		/*
		printf("weare here\n");
		printf("value of i: %lu\n", i);
		*/
		swap_flag = swap_values(array, i, end, size);
		if (swap_flag == 1)
		{
			prev_end = end;
			end = i;
		}
		else
		{
			if (check_if_sorted(array, size) == 1)
			{
				sorted_flag = 1;
			}
			else
			{
				if (bub_sort(array, beg, end, size, count) == 1)
					print_array(array, size);
				beg = end + 1;
				end = prev_end;
			}
		} 
	} 
}
/**
* check_if_sorted:
*/
int swap_values(int *array, int first, int second, size_t size)
{
	int tmp;

	/*printf("before enter if statement line 61\n");*/
	if (first != second)
	{
		tmp = array[first];
		array[first] = array[second];
		array[second] = tmp;
		print_array(array, size);
		return (1);
	}
	/*printf("exited without entering if statement in swap_values line 70\n");*/
	return (0);
}
int check_if_sorted( int *array, size_t size)
{
	size_t x;

	for (x = 0; x < size - 1; x++)
	{
		/*bigger numbe in front, NOT sorted*/
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
			}
		}
		if (swap_flag == 0)
			return (0);
	}
	return (1);
}
