#include "holberton.h"
int check(char *s, char *end);
int find_end(char *end);
/**
* is_palindrome - Checks if a string is a palindrome
* @s: Pointer to a memory location where the string is stored
* Return: 1 if string is palindrome, else 0
*/
int is_palindrome(char *s)
{
	char *end;

	end = s;
	if (*s == '\0')
		return (1);
	return (check(s, s + (find_end(end) - 1)));
}
/**
* check - checks if is a plaidnrome
* @s: Pointer to a memory location of string
* @end: Pointer to memory location to the end of the string
* Return: Address of the end of the string, end
*/
int check(char *s, char *end)
{
	if (s == end || s > end)
		return (1);
	if (*s == *end)
	{
		s++;
		end--;
		return (check(s, end));
	}
	else
		return (0);
}
/**
* find_end - Find the address of the end of the string
* @end: Pointer to the end of the string
* Return: 1 if is a palindrome, 0 if not
*/
int find_end(char *end)
{
	if (*end != '\0')
		return (1 + find_end(end + 1));
	return (0);

}
