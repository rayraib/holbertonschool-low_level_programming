#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - Concatenates all the arguments of a a program
* @ac: The number of arguments
* @av: Pointer to a pointer to a memory location of arguments passed
* Return: NULL, if 'ac' = 0 or 'av'= 0; Pointer to new string, if success.
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *ptr;

	len = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	ptr = malloc((len + ac + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (k != 0)
			k++;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
	ptr[k] = '\n';
	}
	ptr[k + 1] = '\0';
	return (ptr);
}
