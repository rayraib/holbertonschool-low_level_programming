#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Adds positive numbers
* @argc: count of arguments provided
* @argv: Pointer to a memory location where the argument string is stored
* Return: if argc is none 0; if there is non-numerical input 1; else, the sum
*/
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int digit;

	digit = 0;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] >= 48 && argv[i][0] <= 57)
			{
				sum = sum + atoi(argv[i]);
				digit++;
			}
		}
		if (argc - 1 == digit)
			printf("%d\n", sum);
		else
			printf("Error\n");
			return (1);
	}
	return (0);
}


