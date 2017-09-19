#include "holberton.h"
/**
* print_alphabet_x10 - prints lowercase alphabets 10x
*/
void print_alphabet_x10(void)
{
	int alpha;
	int counter; /*counts times alphabets are printed */

	for (counter = 0; counter <= 9; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
			_putchar('\n');
	}
}
