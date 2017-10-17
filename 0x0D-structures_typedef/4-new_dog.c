#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
int* _strcpy(char *s);
/**
* new_dog - Creates a new dog from a dog_t struct
* @name: Pointer to memory location where the dog name string is stored
* @age: Age of dog
* @owner: Pointer to memory location where the owner name is stored
* Return: Pointer to location where the new dog is stored
*         : NULL if failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *p, *n;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL); 
	n = int* (_strcpy(name));
	if (n == NULL)
		return (NULL);
	p = int* (_strcpy(owner));
		return (NULL);
	ptr->age = age;
	ptr->name = n;
	ptr->owner = p;
	return (ptr);
	
}
/**
* _strlen - Returns the length of a string.
* @s: Pointer to a string at address s
* Return: The length of a string (var len)
*/
int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)  /* when value at pointed address is '\0' */
		;
	return (i);
}
/**
* _strcpy - Copies string pointed to by 'src' including null byte to buffer
*           pointed to by 'dest'
* @dest: Pointer to a char type var where string is copied to - destination
* @src: Pointer to a char type var where string is copied from - source
* Return: The copied string
*/
int* _strcpy(char *src)
{
	int i, len;
	char *dest;
	
	len = _strlen(src) + 1;
	dest = malloc (sizeof(char) * len);
	if (dest == NULL) 
		return (NULL);	
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

