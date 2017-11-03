#include "holberton.h"
/**
* set_bit - Sets the value of a bit to `1` at given index
* @n: Pointer to unsigned long int, the number to be changed
* @index: The index where the bit is to be set to 1
* Return: 1 if succes, -1 if failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	mask = mask << index;
	*n = mask | *n;
	return (1);
}
