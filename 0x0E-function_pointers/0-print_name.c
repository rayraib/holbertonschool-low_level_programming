#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* @name: Pointer to a memory location where a name string is stored
* @f: Pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
