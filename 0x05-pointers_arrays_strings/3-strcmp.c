#include "holberton.h"
/**
* _strcmp - Compare two strings
* @s1: Points to the first char variable to compare
* @s2: Points to the second char variable to compare
* Return: if s1 < s2, return -15; if s1 > s2 return 15; if s1 = s2, return 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
