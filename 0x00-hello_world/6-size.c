#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byes(s)", sizeof(int));
	printf("Size of a long int: %d bytes(s)", sizeof(long));
	printf("Size of a long long int: %d byte(s)", sizeof(long long));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
