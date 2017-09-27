#include "holberton.h"
/**
* puts_half - Prints half of a string
* @str: Pointer to a char type variable
*/
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = len - (len / 2); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
