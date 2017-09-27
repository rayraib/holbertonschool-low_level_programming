#include "holberton.h"
/**
* _strcpy - Copies string pointed to by 'src' including null byte to buffer
*           pointed to by 'dest'
* @dest: Pointer to a char type var where string is copied to - destination
* @src: Pointer to a char type var where string is copied from - source
* Return: The copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != 0; i++)
		;
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
