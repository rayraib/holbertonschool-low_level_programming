#include "holberton.h"
/**
* string_toupper - Changes all lowercase letters of a string to uppercase
* @a: Pointer to a char variable that contains the string to be changed
* Return: Pointer a to resulting variable
*/
char *string_toupper(char *a)
{
	int len, i;

	for (len = 0; a[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (a[i] > 97 && a[i] < 122)
			a[i] = a[i] - 32;
	}
	return (a);
}
