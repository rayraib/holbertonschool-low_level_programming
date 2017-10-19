#include <stdio.h>
#include "3-calc.h"
/**
* op_add - Adds two ints
* @a: First integer
* @b: Second inter
* Return: Sum of two ints
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub -  Subtract two integers
* @a: First int
* @b: second int
* Return: Difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Multiply two integers
* @a: First int
* @b: Second int
* Return: Product of the two ints
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Divide two ints
* @a: The number to be divided
* @b: The divider
* Return: Result of division of the two ints
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - Divides two ints
* @a: The number to be divided
* @b: The divisor
* Return: The remainder of the division
*/
int op_mod(int a, int b)
{
	return (a % b);
}
