#include "holberton.h"
/**
* cap_string - Capitalizes the first letter of all words of a string
* @s: Pointer to a char variable that contains the string
* Return: The pointer s
*/
char *cap_string(char *s)
{
	int i, len;
	char *a;

	a = s;
	for (len = 0; a[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n'
		|| a[i] == ',' || a[i] == ';' || a[i] == '.'
		|| a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] ==
		'(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] -= 32;
		}
	}
	return (s);
}
