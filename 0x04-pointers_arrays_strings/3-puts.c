#include "holberton.h"
/**
* _puts - Prints a string
* @str: pointer to a string variable
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
