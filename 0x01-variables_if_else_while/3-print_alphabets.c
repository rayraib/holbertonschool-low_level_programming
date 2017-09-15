#include <stdio.h>
/**
* main - Entry point
* prints a-z then A-Z
* Return: Always 0 (success)
*/
int main(void)
{
	int ct;

	for (ct = 'a'; ct <= 'z'; ct++)
		putchar(ct);
	for (ct = 'A'; ct <= 'Z'; ct++)
		putchar(ct);
	putchar('\n');
	return (0);
}
