#include "holberton.h"
/**
* _isupper - Checks for uppercase character
* @c: The character to be checked
* Return: If uppercase 1, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
