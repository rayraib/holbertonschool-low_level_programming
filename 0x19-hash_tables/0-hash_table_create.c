#include "hash_tables.h"
void initialize_array(hash_table_t *table);
/**
* hash_table_create - create a hash table
* @size: size of the array
* Return: Pointer to newly created hash table (address of hash_table_t)
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t)); /*create table of hash_table_t type*/
	if (table == NULL || size == 0)
		return (NULL);
	table->size = size;
	table->array = malloc(size * 8);/*create an array of pointers*/
	if ((table->array) == NULL)
		return (NULL);
	initialize_array(table);
	return (table);
}
/**
* initialize_array - initialize each index of the array to NULL
* @table: Pointer to the array
*/
void initialize_array(hash_table_t *table)
{
	unsigned long i;

	for (i = 0; i < (table->size); i++)
	{
		((table->array)[i]) = NULL;
	}
}
