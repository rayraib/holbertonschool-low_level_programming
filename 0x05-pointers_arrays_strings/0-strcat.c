#include "holberton.h"
/**
* - Appends the 'src' string to 'dest' string, overwriting the '\0'
* @dest: Pointer to a char var where the string is to be appended into
* @src: Pointer to a char var from where the string is taken to be appended
*
* Return: Pointer to the resulting string 'dest'
*/
char *_strcat(char *dest, char *src)
{
	int d_len, s_len, i;  
	char *temp;

	for (d_len = 0; dest[d_len] != '\0'; d_len++)
		;
	for (s_len = 0; src[s_len] != '\0'; s_len++)
		;
	temp = &dest[d_len];
	for (i = 0; i <= s_len; i++)
	{
		temp[i] = src[i];
	}
	return (dest);

}
