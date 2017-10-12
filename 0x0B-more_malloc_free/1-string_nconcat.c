#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
* string_nconcat - Concatenates two strings
* @s1: Pointer to memory address of first string
* @s2: Pointer to memory address of the second string
* @n: Number of bytes to be concatenated from the second string
* Return: Success, Pointer to the new memory address
*         Failure, NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, l1, l2;
	char a;
	char *ptr;

	a = '\0';
	if (s1 == NULL)
		s1 = &a;
	if (s2 == NULL)
		s2 = &a;
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
		n = l2;
	l = l1 + n;
	ptr = malloc(l + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/**
* _strlen - Returns the length of a string.
* @s: Pointer to a string at address s
* Return: The length of a string (var len)
*/
int _strlen(char *s)
{
	int i; /* to hold value of the length */

	for (i = 0; s[i] != 0; i++)  /* when value at pointed address is '\0' */
		;
	return (i);
}
