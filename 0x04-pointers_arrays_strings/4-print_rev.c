#include "holberton.h"
/**
* print_rev - Prints a string, in reverse
* @s: pointer to a string address with content to be printed
*/
void print_rev(char *s)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
		;
	len = i - 1;
	i  = 0;
	for (i = len ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
