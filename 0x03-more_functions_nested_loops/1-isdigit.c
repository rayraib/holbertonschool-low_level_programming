#include "holberton.h"
/**
* _isdigit - Checks for a digit(0 through 9)
* @c: The character to be checked
* Return: If c is a digit 1, otherwise 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
