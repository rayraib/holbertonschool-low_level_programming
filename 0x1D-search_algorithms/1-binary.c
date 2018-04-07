#include "search_algos.h"
/**
* binary_search: Perform binary search to find a value in an array
* @size: Size of the array
* @value: Value to search for
* Return: Index where value is found, else -1
*/

void print_array(int *array, int low, int high);
int search_recursively(int *array, int value, int low, int high);

int binary_search(int *array, size_t size, int value)
{
        int index;

        if (array == NULL)
                return -1;
        index = search_recursively(array, value, 0, size - 1);
        return (index);
}

/**
* search_recursively - recursively search for a value in an array
* @array: Array to recurse through
* @value: Value to search for
* @low: Lower limit of the array
* @high: Higher limit of the array
* Return: The index of value if found, else -1
*/
  
int search_recursively(int *array, int value, int low, int high)
{
        int mp, x;

        print_array(array, low, high);
        mp = ((high - low) / 2 )+ low;
        if (high == low)
                return -1;
        if (array[mp] == value)
        {
                return (mp);
        }
        else if (array[mp] > value)
        {
                high = mp -1 ;
                x = search_recursively(array, value, low, high);
                return(x);
        }
        else
        {
                low = mp + 1;
                x = search_recursively(array, value, low, high);
                return (x);
        }
        return (x);
}
/**
* print_array - print an array of int to stdou
* @array: array to print
* @size: size of the array 
*/
void print_array(int *array, int low, int high)
{
        int i;

        printf("Searching in array: ");
        for (i = low; i <= high; i++) 
        {
                if (i != high)
                        printf("%d, ", array[i]);
                else
                        printf("%d\n", array[i]);
        }
}
