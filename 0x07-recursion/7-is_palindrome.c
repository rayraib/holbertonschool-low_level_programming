#include "holberton.h"
int compare(char *s, char *temp);
int move(char *temps);
/**
* is_palindrome - Checks if a string is a palindrome
* @s: Pointer to a memory location where the string is stored
* Return: 1 if string is palindrome, else 0 
*/
int is_palindrome(char *s)
{
	char *temp;
	char *t;

	temp = s;
	if (*temp == '\0')
		return(1);	
	temp = move(temp);
	return (compare(s, t));
}


int compare(char *s, char *temp)
{
	if (*s == *temp)
	{
		s++;
		temp++;
		if (s == temp)
			return(1);
		return (compare(s, temp));
	}
	else
		return (0);
}
int move(char *temp)
{
	temp++;
	if (*temp == '\0')
		return(temp);
	return(move(temp));
		
}
