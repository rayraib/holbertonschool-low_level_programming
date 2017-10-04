#include "holberton.h"
void print(char *s);
/**
* _print_rev_recursion - Prints a string in reverse
* @s: Pointer to a memory where the string is stored
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	if (*s == '\0')
		print(s);
	_print_rev_recursion(s);
}
/**
* print - Prints the string
* @s: Pointer to a memory location where the string is stored
*/
void print(char *s)
{
	s--;
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	print(s);
}


