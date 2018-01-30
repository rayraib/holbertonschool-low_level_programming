#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    /*int array[] = {1, 1, 1, 22, 28, 6, 5, 3, 13};
    int array[] = {17, 41, 5, 22, 28, 6, 29, 3 ,13};
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86 ,7};
    int array[] = {1, 1, 1, 1, 1, 1, 1};
    int array[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2};
    int array[] = {8, 1, 14, 9, 15, 5, 4, 3, 7, 17, 11, 18, 2, 12, 16, 13, 6, 10};
    int array[] = {48, 19};*/
    int array[] = {48, 19, 50};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
