#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - Prints the sum of two diagonals of a square matrix of ints.
* @a: Pointer to a memory address where the initial integer is stored
* @size: size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum, sum2;
	int *temp;

	temp = a;
	sum = 0;
	sum2 = 0;
	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum = sum + (*(a + i));
	}
	for (j = size - 1; j < (size * size) - (size - 1); j += (size - 1))
	{
		sum2 = sum2 + (*(temp + j));
	}
	printf("%d, %d\n", sum, sum2);
}
