#include "holberton.h"
#include <stdlib.h>
/**
*create_array - Creates an array of chars, and initialize with a char
* @size: The size of an array of char
* @c: The character to initialize the array with
* Return: If size is 0 or function fails, 0. Else, pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
