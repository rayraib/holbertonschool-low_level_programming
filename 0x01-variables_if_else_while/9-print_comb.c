#include <stdio.h>
/**
* main - prints all possible combination of single-digit num
* Return: Always 0(success)
*/
int main(void)
{
	int i;
	int comma = ',';
	int space = ' ';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			continue;
		putchar(comma);
		putchar(space);
	}
	putchar('\n');
	return (0);
}
