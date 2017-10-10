#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - copies the string given as parameter to a newly allocated space
* @str: The string to be copied
* Return: If str is NULL, NULL. Else, the pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, l;

	for (l = 0; str[l] != '\0'; l++)
		;
	l = l + 1;
	ptr = malloc(l * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
		ptr[i] = str[i];
	return (ptr);
}
