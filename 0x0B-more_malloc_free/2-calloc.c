#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - Allocates memory for an array and sets it to zero
* @nmemb: Number of elements for the array
* @size: Byte size for each element
* Return: Succes, Pointer to the allocated memory
*         Malloc failure, or if size or nmemb is less than zero, return NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
