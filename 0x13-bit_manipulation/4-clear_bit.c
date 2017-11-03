#include "holberton.h"
/**
* clear_bit - Sets the value of a bit to 0 at given index
* @n: Pointer to the number to be checked
* @index: Index where 0 is to be set
* Return: 1 if success, -1 if failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	if (n == NULL)
		return (-1);
	if ((sizeof(unsigned long int) * 8) < index)
				/*Check if index is > ul designated size*/
		return (-1);
	if (((*n >> index) & 1) == 1)/* Check if the num at index is 1*/
	{
		mask = mask << index;/*1 of mask is move to the index position*/
		*n = (*n) ^ mask; /*Value of n at given index is changed to 1*/
	}
	return (1);
}
