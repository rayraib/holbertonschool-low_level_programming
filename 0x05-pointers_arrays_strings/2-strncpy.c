#include "holberton.h"
/**
* _strncpy - copies a string
* @dest: Pointer to a char variable to where string is copied into
* @src: Pointer to char variable from where string is copied
* @n: Number of bytes to be copied
* Return: The resulting value at dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp;

	temp = dest;
	for (i = 0; i < n && src[i] != '\0'; i++)
		temp[i] = src[i];
	for ( ; i < n; i++)
		temp[i] = '\0';
	return (dest);
}
