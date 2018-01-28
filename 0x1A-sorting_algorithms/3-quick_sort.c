#include "sort.h"
int swap_values(int *array, size_t first, size_t second, size_t size);
int check_if_sorted(int *array, size_t beg, size_t end);
int sort(int *array, size_t beg, size_t end, size_t size, int count);  
/**
* quick_sort - Sort an array of int in ascending order using quick sort
* @array: Array to sort
* @size: Size of the array
*/
void quick_sort(int *array, size_t size)
{
	size_t beg, end;
	int count;

	count = 0;
	beg = 0;	
	end = size - 1;
	count = (sort(array, beg, end, size, count));
	printf("count: %d\n", count);
}
/**
* sort - partition each array as lesser and greater than pivot value
* @array: Array of int to sort
* @beg: Lower bound of the array to sort from
* @end: Upper end of the array to sort from
* @size: Original size of the array
* @count: Count of recursive call
*/
int sort(int *array, size_t beg, size_t end, size_t size, int count)
{
	int pivot, swap_flag = 0;
	size_t i, j;

	count++;
	pivot = array[end];
	j = beg;
	i = j - 1;
	/* compare each element to the pivot value of the  partition,
	   smaller values go the the left and larger to the right of pivot*/
	for (j = beg; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_flag = (swap_values(array, i, j, size));
		}
	}
	i++;
	swap_flag = (swap_values(array, i, j, size));
	/*if no swap occured*/
	if (swap_flag == 0)
	{
		/* check if the aray is sorted*/
		if (check_if_sorted(array, beg, end) == 1)	
			return (count);
		  /*move one index back and set it as the end index
		  because current end num is the largest num in the array*/
		end = end - 1;
		sort(array, beg, end, size, count);
	}
	/* swap occured*/
	else
	{
		/*call sort on the lowert partition*/
		sort(array, beg, i, size, count);
		/* call sort on the upper partition*/ 
		sort(array, i, end, size, count);
	}
	return (count);

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
