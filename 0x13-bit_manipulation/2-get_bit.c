#include "holberton.h"
/**
* get_bit - Finds the value of a bit at given index
* @n: The number to be checked
* @index: The index, starting from 0
* Return: The value at the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	mask = mask << index;
	if ((n & mask)  >= 1)
		return (1);
	else if ((n & mask) == 0)
		return (0);
	else
		return (-1);
}
