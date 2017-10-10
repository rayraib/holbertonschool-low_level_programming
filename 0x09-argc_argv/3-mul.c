#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies two numbers
* @argc: Number of arguments or numbers
* @argv: Pointer to memory location where the number are stored
* Return: If there are no 2 arguments, then return 'Error'
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
