#include "holberton.h"
/**
* _strchr - Locates a character in a string
* @s: Pointer to the memory address of s where the string is stored
* @c: The character whic is to be located
* Return: Pointer to the first occurence of the character 'c' in s or '\0'.
*/
char *_strchr(char *s, char c)
{
	char *p;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = s + i;
			return (p);
		}
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
