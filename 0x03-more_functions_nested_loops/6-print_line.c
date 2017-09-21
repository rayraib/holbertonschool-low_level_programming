#include "holberton.h"
/**
* print_line - Draws a straight line in the terminal
* @n: The number of _ to be printed
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
