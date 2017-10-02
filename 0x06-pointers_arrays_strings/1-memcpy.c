#include "holberton.h"
/**
* _memcpy - Copies memory area
* @src: Pointer to memory area where bytes are to be copied
* @dest: Pointer to memory area from where bytes are to be copied
* @n: Number of bytes to be copied
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (0);
}

