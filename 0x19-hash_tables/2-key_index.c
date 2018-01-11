#include "hash_tables.h"
/**
* key_index - Calculates teh index of a key
* @key: the key
* @size: the size of the array of the hash table
* Return: the index at which the key/value pair is to be stored in the
*         array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long index;

	(void) size;
	index = hash_djb2((unsigned char *)key);
	index = index % size;
	return (index);
}
