#include <stdio.h> 
#include <stdarg.h> 
#include "variadic_functions.h"
/**
* print_numbers - Prints numbers
* @separator: Pointer to a char parameter
* @n: Number of parameters
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, num;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg,int);
		if (i != (n - 1) && separator != NULL)
		{
			
			printf("%d%c ",num, *separator);	
		}
		else
		{
			printf("%d\n",num);	
		}
		va_end(arg);
	}
}
