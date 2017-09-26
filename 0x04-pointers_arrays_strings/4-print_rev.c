#include "holberton.h"
/**
* print_rev - Prints a string, in reverse
* @s: pointer to a string address with content to be printed
*/
void print_rev(char *s)
{
	int counter, i;

	counter = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		counter++;
		i++;
	}
	counter = counter - 1;
	while (*(s + counter) >= 0)
	{
		_putchar(*(s + counter));
		counter--;
	}
	_putchar('\n');
}
