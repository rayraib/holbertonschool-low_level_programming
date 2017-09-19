#include "holberton.h"
/**
* _isalpha - checks for alphabetic characters
* Return: Is a letter 1
* Return: Is not a letter 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
