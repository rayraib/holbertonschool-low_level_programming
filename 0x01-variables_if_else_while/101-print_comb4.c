#include <stdio.h>
/**
* main - prints combination of 3 digits without repition of the digits
* Return: Always 0(succes)
*/
int main(void)
{
	int first;
	int second;
	int third;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = '0'; third <= '9'; third++)
			{
				if (first < second && second < third)
				{
					putchar(first);
					putchar(second);
					putchar(third);
					if (first == '7' && second == '8' && third == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
