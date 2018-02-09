#include "sort.h"
void divide(size_t low, size_t, int *array, int *new_array, size_t);
void merge(size_t, size_t, size_t, int *, int *, size_t);
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
*/
void divide(size_t low, size_t high, int *array, int *new_array, size_t size)
{
    size_t mp;
    
    mp = ((high - low) / 2) + low;
    if (low < high)
    {
        divide(low, mp - 1, array, new_array, size);
        divide(mp, high, array, new_array, size);
        merge(low, mp, high, array, new_array, size);
    } 
    else
        return;
}
/*
*
*/
void merge(size_t low, size_t mp, size_t high, int *array, int *new_array, size_t size)
{
    size_t m;
    size_t i;
    size_t j;

    m = low;
    i = low;
    j = mp;
    while (i < mp && j <= high)
    {
        if (array[i] < array[j])
        {
            new_array[m] = array[i];
            m++;
            i++;
        }
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
            i++;
        }
        if (i == mp)
        {
            new_array[m] = array[j];
            j++;
        }
        m++;
    }
    while (low <= high)
    {
        array[low] = new_array[low];
        low++;
        print_array(array, size);
    }
}
