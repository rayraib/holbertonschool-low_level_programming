#include "holberton.h"
/**
* _strspn - Gets the length of a prefix substring
* @s: Pointer to memory address where the string to be checked is
* @accept: pointer to a memory address where the bytes to be checked exist
* Return: The number of bytes in the initial segment of 's'
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
		}
	}
	return (len);
}
