#include "holberton.h"
/**
* rev_string - reverses a string
* @s: Pointer to a string address with strings to be reversed
*/
void rev_string(char *s)
{
	int j, i, len, temp;

	i = len = 0;
	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	j = len - 1;
	i = 0;
	while (i < j)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i++;
		j--;
	}
}
