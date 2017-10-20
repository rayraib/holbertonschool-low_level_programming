#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - Sums all of its parameters
* @n: Number of parameters to sum
* Return: The sum number
*         0, if n equals 0;
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);
	return (sum);
}
