#include "sort.h"

void merging(size_t low, size_t mid, size_t high, int *array, int *new_array, size_t size);
void merging(size_t low, size_t mid, size_t high, int *array, int *new_array, size_t size);
void sort(size_t low, size_t high, int *array, int *new_array, size_t size);
void merge_sort(int *array, size_t size)
{
    int *new_array = NULL;

    new_array = malloc(sizeof(int) * size);
    if (new_array == NULL)
        return;
    sort(0, size - 1, array, new_array, size);
}

void sort(size_t low, size_t high, int *array, int *new_array, size_t size)
{
    size_t mid;

    if (high - low <= 1)
    {
        mid = low + high / 2;
        sort(mid, low, array, new_array, size);
        sort(mid + 1, high, array, new_array, size);
        merging(low, mid, high, array, new_array, size);
    }
    else
    {
        return; 
    }
}
void merging(size_t low, size_t mid, size_t high, int *array, int *new_array, size_t size)
{
    size_t l1, l2, i;

    for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
    {
        if (array[l1] <= array[l2]) 
            new_array[i] = array[l1++];
        else
            new_array[i] = array[l2++];
    }
    while (l1 <= mid)
        new_array[i++] = array[l1++];
    while (l2 <= high)
        new_array[i++] = array[l2++];
    while (low <= high)
        array[low] = new_array[low];
        low++;
    printf("new_array\n");
    print_array(new_array, size);
}
