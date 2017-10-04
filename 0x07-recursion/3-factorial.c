#include "holberton.h"
/**
* factorial - Returns the factorial of a given number
* @n: The number whose factorial is to be found
* Return: if n < 0 return -1; else, return the factorial value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return ((n * factorial(n - 1)));
}
