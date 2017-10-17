#include "dog.h"
#include "stdlib.h"
/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to memory location of variable to be initialized
* @name: Pointer to memory location for name variable
* @age: Age of dog
* @owner: Pointer to memory location for owner's name variable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name == NULL)
		return;
	if (owner == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
