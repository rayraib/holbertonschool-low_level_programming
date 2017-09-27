#include "holberton.h"
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
