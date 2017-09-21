#include "holberton.h"
/**
* print_diagonal - Prints a diagonal line on the terminal
* @n: the number of \ to be printed to make the diagonal line
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
