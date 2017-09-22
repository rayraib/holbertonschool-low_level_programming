#include "holberton.h"
/**
* print_triangle - prints a triangle with spaces and #
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	int i;
	int space;
	int pound;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (space = 0; space < (i - 1); space++)
			{
				_putchar(' ');
			}
			for (pound = (i - 1); pound < size; pound++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

