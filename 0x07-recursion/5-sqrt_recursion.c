#include "holberton.h"
int root(int n, int i);
/**
* _sqrt_recursion - Returns the natural square root of a numbe
* @n: The number to be evaluated
* Return: The square root, if no square root, return -1
*/
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	if (n < 0)
		return (-1);
	return (root(n, i));
}

/**
* root - returns the square root of a number
* @n: The number to be evaluated
* @i: Divisors for n
* Return: If n has a square root, return the square root value, else, -1
*/
int root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i == n)
		return (-1);
	i++;
	return (root(n, i));
}

