#include "holberton.h"
#include <stdlib.h>
/**
* _realloc - Reallocates a memory block
* @ptr: Pointer to memory previously allocated
* @old_size: Size of previously allocated memory
* @new_size: Size of newly allocated memory
* Return: Pointer to newlly allocatted memory or NULL if failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *np;
	char *a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	np = malloc(new_size);
	if (np == NULL)
		return (NULL);
	a = ptr;
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			np[i] = a[i];
	}
	free(ptr);
	return (np);
}
