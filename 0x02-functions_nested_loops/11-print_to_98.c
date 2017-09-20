#include <stdio.h>
/**
* print_to_98 - prints natural number from n(passed to the function) to 98
* @n: Starting point:
*/
void print_to_98(int n)
{
	int i;

	for (i = n ; i < 98; i++)
	{
		printf("%d, ", i);
	}

	for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
