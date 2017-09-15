#include <stdio.h>
/**
* main - print combination of two digits but only the small one and no repeat.
* Return: Always 0(success)
*/
int main(void)
{
	int first;
	int second;

	for (first = 0; first < 99; first++)
	{
		for (second = first + 1; second <= 99; second++)
		{
			putchar(first / 10 + '0');
			putchar(first % 10 + '0');
			putchar(' ');
			putchar(second / 10 + '0');
			putchar(second % 10 + '0');
			if (first == 98 && second == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
