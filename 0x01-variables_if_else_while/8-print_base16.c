#include <stdio.h>
/**
* main - prints all number of base16 in lowercase
* Return: Always 0(succes)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
