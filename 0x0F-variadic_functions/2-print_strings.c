#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - Prints strings
* @separator: Pointer to a char string to be printed
* @n: Number of Arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	char *string;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		string = (va_arg(s, char *));
		if (i != n - 1 && s != NULL)
			printf("%s%c ", string, *separator);
		if (i != n - 1 && s == NULL)
			printf("nil%c ", *separator);
		if (i == n - 1 && s != NULL)
			printf("%s\n", string);
		if (i == n - 1 && s == NULL)
			printf("nil\n");
	}

}
