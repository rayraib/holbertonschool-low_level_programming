#include "holberton.h"
int len(char *s, int count);
/**
* _strlen_recursion - Returns the length of a string
* @s: Pointer to memory location where the string is stored
* Return: The length of the string
*/
int _strlen_recursion(char *s)
{
	int count, l;

	count = 0;
	if (*s == '\0')
		return (0);
	l = len(s, count);
	return (l);
}

/**
* len - Count the lentgh of a string
* @s: Pointer to memory location of string to be counted
* @count: length of string
* Return: length of string
*/
int len(char *s, int count)
{
	count++;
	s++;
	if (*s == '\0')
		return (count);
	return (len(s, count));
}
