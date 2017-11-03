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
		return (-1);
	if (((*n >> index) & 1) == 1)
	{
		mask = mask << index;
		*n = (*n) ^ mask;
	}
	else
	{
		mask = mask << index;
		*n = (*n) & index;
	}
	return (1);
}
