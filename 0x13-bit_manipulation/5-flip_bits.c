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
	temp = n ^ m;
	num = 0;
	while (temp != 0)
	{
		if ((temp & mask) == 1)
			num++;
		temp = temp >> 1;
	}
	return (num);
}
