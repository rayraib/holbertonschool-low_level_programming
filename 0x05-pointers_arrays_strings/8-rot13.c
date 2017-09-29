#include "holberton.h"
/**
* rot13 - encodes a string using rot13
* @s: Pointer to a char variable * Return: The resulting at
*/
char *rot13(char *s)
{
	char b[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char a[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
