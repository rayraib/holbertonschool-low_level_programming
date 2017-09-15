#include <stdio.h>
/**
* main - prints lowercase a-z
*
* Return: Always 0 (succes)
*/
int main(void)
{
	int ct;

	for (ct = 'a'; ct <= 'z'; ct++)
		putchar(ct);
	putchar('\n');
	return (0);
}
