#include "holberton.h"
/**
* _strncat - Pointer to a char varible where two strings are concatenated
* @dest: Pointer to a char variable to which string is concatenated into
* @src: Pointer to a char variable from where string in concatenated into dest
* @n: Number of bytes to be concatenated
*
* Return: Pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, d_len, s_len;
	char *temp;

	for (d_len = 0; dest[d_len] != '\0'; d_len++)
		;
	for (s_len = 0; src[s_len] != '\0'; s_len--)
		;
	temp = &dest[d_len];
	for (i = 0; i < n && src[i] != '\0'; i++)
		temp[i] = src[i];
	return (dest);
}
