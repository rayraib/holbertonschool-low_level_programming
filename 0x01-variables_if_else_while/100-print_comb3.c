#include <stdio.h>
/**
* main - prints combination of two digits but only smaller one
* Return: Always 0(success)
*/
int main(void)
{
	int(first);
	int(second);

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			if (first < second)
			{
				putchar(first);
				putchar(second);
				if (first == '8' && second == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
