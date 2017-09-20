#include "holberton.h"
/**
* _islower - Checks for lowercase character
* @c: Character to be checked
*
* Description: Takes a single character and checks
* whether it is a lowercase letter or not
* Return: If is lowercase 1, otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
