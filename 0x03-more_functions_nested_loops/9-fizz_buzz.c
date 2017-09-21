#include <stdio.h>
/**
* main - prints 1 to 100, replacing multiple of 3 by 'Fizz',
* multiple of 5 by 'buzz' and multiple of both by "Fizzbuzz"
* Return: Always 0(success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
