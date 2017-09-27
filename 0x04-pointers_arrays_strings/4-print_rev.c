#include "holberton.h"
/**
* print_rev - Prints a string, in reverse
* @s: pointer to a string address with content to be printed
*/
void print_rev(char *s)
{
	int str_len;

	str_len = _strlen(s);
	str_len = str_len - 2;
	while (*(s + str_len) >= 0)
	{
		_putchar(*(s + str_len));
		str_len--;
	}
	_putchar('\n');

}
/**
* _strlen - Returns the length of a string.
* @s: Pointer to a string at address s
* Return: The length of a string (var len)
*/
int _strlen(char *s)
{
	char i, len; /* to hold value of the length */

	len = 0;
	i = 0;
	while (*(s + i) != '\0') /* when value at pointed address is '\0' */
				/* a null value, the statement is untrue and */
	{
		len++;
		i++;
	}
	return (len);
}
