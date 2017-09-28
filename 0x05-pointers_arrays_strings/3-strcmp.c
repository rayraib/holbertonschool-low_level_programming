#include "holberton.h"
/**
* _strcmp - Compare two strings
* @s1: Points to the first char variable to compare
* @s2: Points to the second char variable to compare
* Return: if s1 < s2, return -15; if s1 > s2 return 15; if s1 = s2, return 0
*/
int _strcmp(char *s1, char *s2)
{
	int f_len, s_len; /* first string length and second string length */

	for (f_len = 0; s1[f_len] != '\0'; f_len++) /*calculate length of s1 */
		;
	for (s_len = 0; s2[s_len] != '\0'; s_len++) /*calculate lentgh of s2 */
		;
	if (f_len == s_len)
		return (0);
	if (f_len < s_len)
		return (-15);
	else 
		return (15);
}
