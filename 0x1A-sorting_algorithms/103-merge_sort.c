#include "sort.h"
void divide(size_t low, size_t, int *array, int *new_array, size_t);
void merge(size_t, size_t, size_t, int *, int *, size_t);
/*
* merge_sort - sort an array of integers using the merge sort
* @array: array of ints to sort
* @size: size of the array
*/
void merge_sort(int *array, size_t size)
{
    int *new_array;

    new_array = malloc(sizeof(int) * size );
    if (new_array == NULL)
        return;
    else
        divide(0, (size - 1), array, new_array, size);
}
/*
* divide - divides/sorts the array into halves with each recursive call 
* @low: the lower bound of the divided array
* @high: the upper bound of the divided array
* @array: The original array of ints
* @new_array: New empty array used for temporary storage
* @size: Size of the original array used for printing
*/
void divide(size_t low, size_t high, int *array, int *new_array, size_t size)
{
    size_t mp;

    /*return if only one element in the divided array*/
    if (low >= high)
            return;
    else
    {
        mp = (low + high) / 2;
        /*call the left array to be divided again*/
        divide(low, mp, array, new_array, size);
        /* call the right array to be divided again*/
        divide(mp + 1, high, array, new_array, size);
        /* call the left and right array to be sort and merged*/
        merge(low, mp, high, array, new_array, size);
    } 
}
/*
* merge - Merges the divided array while sorting the elements in order
* @low: The lower bound of the divided array
* @mp: Midpoint of the array to further divide
* @high: The higher bound of the divided array
* @new_array: New array for temporary storage of sorted ints
* @size: Size of the original array
*/
void merge(size_t low, size_t mp, size_t high, int *array, int *new_array, size_t size)
{
    size_t m;
    size_t i;
    size_t j;

    (void)size;
    m = low;
    i = low;
    j = mp + 1;
    while (i <= mp  && j <= high)
    {
        /*if the left array contains smaller element copy
          that to the new array*/
        if (array[i] < array[j])
        {
            new_array[m] = array[i];
            m++;
            i++;
           

        }
        /*else if the right array contains the smaller element
          copy that element to the new temp array*/
        else 
        {
            new_array[m] = array[j];
            m++;
            j++;
        }
    }
    while (m <= high)
    {
        if (j > high)
        {
            new_array[m] = array[i];
            m++;
            i++;
        }
        if (i > mp)
        {
            new_array[m] = array[j];
            m++;
            j++;
        }
    }
    /*copy the sorted elements in correct order to the original array*/
    while (low <= high)
    {
        array[low] = new_array[low];
        low++;
        print_array(array, size);
    }
}
