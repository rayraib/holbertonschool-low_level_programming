#include "holberton.h"
/**
* print_times_table - Prints the given number(n) times table starting with 0
* @n: The number of times to print for the table
*/
void print_times_table(int n)
{
	int result, row, column;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				result = row * column;
				if (column != 0)
				{
					_putchar(' ');
					if (result > 99)
					{
						_putchar((result / 100) + '0');
						_putchar(((result / 10) % 10) + '0');
					}
					else if (result >= 10 && result < 100)
					{
						_putchar(' ');
						_putchar(result / 10 + '0');
					}
					else if (result < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((result % 10) + '0');
					if (column != n)
						_putchar(',');
					continue;
				}
				_putchar(column + '0');
				if (n != 0)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
