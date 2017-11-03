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

	mask = 1; /* has binary value of 0001 */
	mask = mask << index;
	if (((sizeof(unsigned long int)) * 8) < index)	/*check for*/
							/* if index is greater than size of num */
		return (-1);
	if ((n & mask)  >= 1)	/* if n and (&) mask gives 1 or */
				/* greater number, then the number at that index was 1*/
		return (1);
	else			/* if n and(&) mask gives result of 0,*/
		return (0);	/* then the number at that index was 0 */
}
