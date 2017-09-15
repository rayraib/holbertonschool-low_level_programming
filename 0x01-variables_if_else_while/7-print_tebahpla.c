#include <stdio.h>
/**
* main - prints lowercase alphabets in reverse
* Return: Always 0(success)
*/
int main(void)
{
	int ct;

	for (ct = 'z'; ct >= 'a'; ct--)
		putchar(ct);
	putchar('\n');
	return (0);
}
