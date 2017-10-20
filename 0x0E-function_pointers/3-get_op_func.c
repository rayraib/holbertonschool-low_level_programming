#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
* get_op_func - Selects the correct funtion to perform the operation
*             - asked by a user
* @s: Pointer to the operator
* Return: The result of the operation
*         If failure, NULL.
*/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < 5 && strcmp(s, ops[i].op) != 0)
	{
		i++;
	}
	return (ops[i].f);
}
