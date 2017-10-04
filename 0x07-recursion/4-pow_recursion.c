#include "holberton.h"
/**
* _pow_recursion - Returns the value of `x` raised to the power of `y`
* @x: The base value to power up
* @y: The power value
* Return: -1 if y is lower than 0: else, the the value after raising the power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	y--;
	return (x * (_pow_recursion(x, y)));
}
