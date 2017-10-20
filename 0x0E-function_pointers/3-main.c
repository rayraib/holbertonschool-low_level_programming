#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - Entry point
* @argc: Argumet count
* @argv: Pointer to a pointer to a string
* Return: O if succes
*/
int main(int argc, char **argv)
{
	int result;
	char *str;
	int (*get)(int, int); /* Pointer to a function that takes two ints */
			      /*  as parameter and returns an int */

	int a = atoi(argv[1]); /*Convert the values as at */
			       /*pointed to by argv[1] to int */
	int b = atoi(argv[3]);

	str = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((**(argv + 2) == '/' || **(argv + 2) == '%') && (**(argv + 3) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	get = get_op_func(str); /* get, a pointer to function, is assigned */
				 /* the address value returned by get_op_fuc)*/
	if (get == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get(a, b);
	printf("%d\n", result);
	return (0);
}
