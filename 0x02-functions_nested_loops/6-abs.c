#include "holberton.h"
/**
* _abs - Computes the absolute value of an integer
* @num: Number to be evaluated then computed o absolute value
* Return: abs_num
*/
int _abs(int num)
{
	int abs_num;

	if (num < 0)
	{
		abs_num = num * -1;
	}
	return (abs_num);
}
