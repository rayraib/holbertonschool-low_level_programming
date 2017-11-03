#include "holberton.h"
/**
* flip_bits - Calculates the number of bits that are different in `n` and `m`
* @n: The first number to check
* @m: The second number to check
* Return: The number of bits that are different,
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, temp, num;

	mask = 1;
	temp = n ^ m; /* find the numbers of difference between n and m */
	num = 0;
	while (temp != 0) /* loop until the number is 0 */
	{
		if ((temp & mask) == 1)/*Check if there is '1'- the diff between n and m*/
			num++;/*Increment for the number of differences */
		temp = temp >> 1;/*Shift the num to the right to check at the next index */
	}
	return (num);
}
