#include "holberton.h"
/**
* swap_int - swaps the values of two integers
* @a: Pointer to an integer of variable a
* @b: Pointer to an integer of variable b
*/
void swap_int(int *a, int *b)
{
	int old_a_value;

	old_a_value = *a;
	*a = *b;
	*b = old_a_value;
}
