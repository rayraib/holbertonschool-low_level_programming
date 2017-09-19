#include "holberton.h"
/**
* print_last_digit - Prints last digit of a number
* @n: The number of which last digit is to be retrieved
* Return: The last digit of n
*/
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = n * -1;
	}
	last_digit = (n % 10);
	_putchar('0' + last_digit);
	return (last_digit);
}
