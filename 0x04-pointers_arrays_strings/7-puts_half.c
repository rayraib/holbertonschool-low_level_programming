#include "holberton.h"
/**
* puts_half - Prints half of a string
* @str: Pointer to a char type variable
*/
void puts_half(char *str)
{
	int i, len;

	for (i = 0; str[i] != '\0'; i++)
		;
	len = i;
	for (i = len - (len / 2); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
