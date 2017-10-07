#include <stdio.h>
/**
* main - prints the number of arguments passed into it
* @argc: Counter for arguments passsed
* @argv: Pointer to a memory location where argument varialbes are stored
* Return: Succes 0
*/
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
