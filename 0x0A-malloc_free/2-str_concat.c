#include "holberton.h"
#include <stdlib.h>
/*int _strlen(char *s);*/
/**
* str_concat - concatenates two strings
* @s1: First string to be concatenated
* @s2: Second string to be concatenated
* Return: Pointer to concatenated string, if fail then NULL
*/
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	char *ptr;
	char a;

	a = '\0';
	if (s1 == NULL)
		s1 = &a;
	if (s2 == NULL)
		s2 = &a;
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ptr = malloc((l1 + l2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		ptr[(l1) + i] = s2[i];
	}
	return (ptr);
}
