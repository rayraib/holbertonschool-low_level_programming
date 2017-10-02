#include "holberton.h"
/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: Pointer to a memory address where the string exists
* @accept: Pointer to an address where they bytes to be searched exist
* Return: Pointer to the byte in 's' that matches bytes in accpt or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int len, i, j;
	char *p;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= len)
				{
					len = j;
				}
				p = &s[len];
			}
		}
	}
	if (j == len)
		return (NULL);
	return (p);
}
