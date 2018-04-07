#include "search_algos.h"

/**
* linear_search - Linearly search an array for a value 
* @size: Size of the array
* @value: Value to search for
* Return: First index of the value found, else -1
*/

int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (array == NULL)
                return -1;
        for (i = 0; i < size; i++)
        {
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
                if (array[i] == value)
                        return (i);
         }
        return -1;
}
