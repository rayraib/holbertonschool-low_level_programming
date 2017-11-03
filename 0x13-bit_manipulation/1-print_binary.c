#include "holberton.h"
/**
* print_binary - Prints the binary representation of a number
* @n: The number whose binary representation is to be printed
*/
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int place;

	place = 1;
	i = 0;
	if (n == 0)
		putchar('0');
	while (place <= n)
	{
		place = place * 2;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		if (((n >> i) & 1) == 1)
			putchar('1');
		else
			putchar('0');
		i--;
	}
}
