#include <stdio.h>
/**
* main - Computes and prints teh sum of all the multiple of 3 or 5
* Return: Always 0(success)
*/
int main(void)
{
	int sum;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
