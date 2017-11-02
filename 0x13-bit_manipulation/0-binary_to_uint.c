#include "holberton.h"
/**
* binary_to_uint - Converts binary number to an unsigned int
* @b: Pointer to string to be converted
* Return: The converted unsigned int
*       : If b is NULL, and if one or more chars int the string
*         that is not '0' or '1' return 0.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, bval;
	int i;

	i = 0;
	result = 0;
	bval = 1;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result += ((b[i] - '0') * bval);
			if (bval == 1)
				bval = 2;
			else
				bval = bval * 2;
		}
		else
		{
			return (0);
		}
		i--;
	}
	return (result);
}
