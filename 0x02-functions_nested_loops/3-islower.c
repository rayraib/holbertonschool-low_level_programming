#include "holberton.h"
/*
* _islower - checks for lowercase character
* Return: is lowercase 1,
* Return: is not lowercase 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
