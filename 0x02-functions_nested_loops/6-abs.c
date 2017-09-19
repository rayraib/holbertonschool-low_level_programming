#include "holberton.h"
/**
* _abs - Computes the absolute value of an integer
* @num: Number to be evaluated then computed o absolute value
* Return: abs_num
*/
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
