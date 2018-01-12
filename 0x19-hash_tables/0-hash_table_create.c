#include "hash_tables.h"
/**
* hash_table_create - create a hash table
* @size: size of the array
* Return: Pointer to newly created hash table (address of hash_table_t)
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t)); /*create table of hash_table_t type*/
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(size * 8);/*create an array of pointers*/
	if (table->array == NULL)
		return (NULL);
	return (table);
}
