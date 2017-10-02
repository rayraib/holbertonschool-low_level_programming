#include "holberton.h"
/**
* _memset - Fills memory with a constant byte
* @s: Pointer to the memory area s where constant byte is added
* @b: Constant byte
* @n: Number of bytes to be replaced with the constant byte
* Return: A pointer to the memory area 's'
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
