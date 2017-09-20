#include <stdio.h>
/**
* print_to_98 - prints natural number from n(passed to the function) to 98
* @n: Starting point:
*/
void print_to_98(int n)
{
	int i;

	for (i = 0 ; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	for (i = n; i > 98; i--)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
