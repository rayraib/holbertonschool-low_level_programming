#include <stdio.h>
/**
* main - prints the sum of even Fibonacci sequence less than 4,000,000
* Return: Always 0(succes)
*/
int main(void)
{
	int i;
	long first;
	long second;
	long sum;
	long total;

	first = 1;
	second = 2;
	total = 2;
	for (i = 0; i <= 29; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		if (sum % 2 == 0)
			total = total + sum;
	}
	printf("%ld\n", total);
	return (0);
}
