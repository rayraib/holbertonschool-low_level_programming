#include <stdio.h>
/**
* main - Prints the largest prime factor of the number 612852475143
* Return: Succes 0
*/
int main(void)
{
	long i;
	long num;
	long max;

	i = 2;
	num = 612852475143;
	max = 0;

	while (num > 1)
	{
		if (num % i == 0)
		{
			num /= i;
			if (max < i)
				max = i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", max);
	return (0);
}
