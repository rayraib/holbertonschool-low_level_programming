#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci number, starting with 1 and 2
* Return: Always 0(success)
*/
int main(void)
{
	int i;
	long int first;
	long int second;
	long int sum;

	first = 1;
	second = 2;
	printf("1, 2");
	for (i = 0; i <= 46; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf(", %ld", sum);
	}
	printf("\n");
}
