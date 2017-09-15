#include <stdio.h>
/**
* main - Entry point
* Prints a-z except 'q' and 'e'
* Return: Always 0 (succes)
*/
int main(void)
{
	int ct;

	for (ct = 'a'; ct <= 'z'; ct++)
	{
		if (ct == 'q')
			continue;
		else if (ct == 'e')
			continue;
		putchar(ct);
	}
	putchar('\n');
	return (0);
}
