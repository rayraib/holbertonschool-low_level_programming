#include "holberton.h"
/**
* print_numbers - Prints number, from 0 to 9, with new line
*/
void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}

