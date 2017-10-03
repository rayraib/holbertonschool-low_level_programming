#include "holberton.h"
/**
* _strstr - Locates a substring
* @haystack: Pointer to an address with a string
* @needle: Pointer to an address where the substring is stored
* Return: Pointer to the beginning of the located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *temp;

	if (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*haystack == needle[0])
			{
				temp = haystack;
				i = 0;
				while (*temp != '\0')
				{
					if (*temp == needle[i])
					{
						temp++;
						i++;
					}
					else
						break;
				}
				if (needle[i] == '\0')
					return (haystack);
			}
			else
			{
				haystack++;
			}
		}
		return (NULL);
	}
	return (haystack);
}
