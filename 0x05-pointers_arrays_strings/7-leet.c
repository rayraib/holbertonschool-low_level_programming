#include "holberton.h"
/**
* leet - encodes a string into 1337
* @s: Pointer to a char type that contains string to be encoded
* Return: Addres at the pointed by s with the resulting encoded string
*/
char *leet(char *s)
{
	int i, j;
	char key[] = "A4a4E3e3O0o0T7t7L1l1";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (key[j] != '\0')
		{
			if (s[i] == key[j])
				s[i] = key[j + 1];
			j += 2;
		}
	i++;
	}
	return (s);
}
