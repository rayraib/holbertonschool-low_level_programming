/**
* print_name - prints a name
* @name: Pointer to a memory location where a name string is stored
* @f: Pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
