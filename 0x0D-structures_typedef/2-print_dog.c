#include "dog.h"
#include <stdio.h>
/**
* print_dog - Prints struct dog
* @d: Pointer to memory location of struct dog
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, (*d).age, d->owner);
}
