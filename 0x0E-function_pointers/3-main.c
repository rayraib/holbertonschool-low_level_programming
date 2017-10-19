#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - Entry point
* 
*/
int main ( int argc, char **argv)
{
	int result;
	int (*get_op_func)(int, int);

	if (argc != 4)
		printf("Error\n");
		exit (98);
	if (**(argv+2) != '+' || **(argv + 2) != '-' || **(argv + 2) != '*' || **(argv + 2) != '/' || **(argv + 2)!= '%')
		printf("Error\n");
		exit (99);
	if ((**(argv + 2) == '/' || **(argv + 2) == '%') && (**(argv + 2) == 0))
		printf("Error\n");
		exit (100);
	result = get_op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);

}

