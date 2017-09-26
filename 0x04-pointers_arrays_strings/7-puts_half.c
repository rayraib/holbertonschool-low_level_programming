#include "holberton.h"
/**
* puts_half - Prints half of a string
* @str: Pointer to a char type variable
*/
void puts_half(char *str)
{
	int j, i, len;

	len = 0;
	i = 0;
	while (*(str + i) != '\0') /* when value at pointed address is '\0' */
				/* a null value, the statement is untrue and */
	{
		len++;
		i++;
	}
	j = (len) / 2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
