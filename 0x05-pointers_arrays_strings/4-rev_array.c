#include "holberton.h"
/**
* reverse_array - Reverses the content of an array of integers
* @a: Pointer to an integer variable whose content is to be reversed.
* @n: number of elements
*/
void reverse_array(int *a, int n)
{
	int i, *temp_a, c;

	temp_a = a;
	i = 0;
	while (i < n)
	{
		c = temp_a[i];
		temp_a[i] = temp_a[n];
		temp_a[n] = c;
		i++;
		n--;
	}
}
