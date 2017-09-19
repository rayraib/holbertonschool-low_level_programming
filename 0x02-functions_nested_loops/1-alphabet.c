#include "holberton.h"
/**
* print_alphabet - prints lowercase alphabet a-z
*/
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
