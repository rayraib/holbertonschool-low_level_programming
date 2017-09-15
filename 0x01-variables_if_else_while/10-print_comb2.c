#include <stdio.h>
/**
* main - prints number from 00 to 99
* Return: Always 0(success)
*/
int main(void)
{
	int i = '0';
	int j;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i == '9' && j == '9')
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
