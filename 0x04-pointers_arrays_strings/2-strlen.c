#include "holberton.h"
/**
* _strlen - Returns the length of a string.
* @s: Pointer to a string at address s
* Return: The length of a string (var len)
*/
int _strlen(char *s)
{
	char i, len; /* to hold value of the length */

	len = 0;
	i = 0;
	while (*(s + i) != '\0') /* when value at pointed address is '\0' */
				/* a null value, the statement is untrue and */
	{
		len++;
		i++;
	}
	return (len);
}
