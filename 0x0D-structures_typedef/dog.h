#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - New data type for a dog
* @name: First element
* @age: Second element
* @owner: Third element
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
#endif /* _DOG_H_ */
