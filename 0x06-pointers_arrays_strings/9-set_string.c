#include "holberton.h"
/**
* set_string - Sets the value of a pointer to a char
* @s: Pointer to a memory address for a char
* @to: POinter to a memory addres address
*/
void set_string(char **s, char *to)
{
	*s = to;
}
