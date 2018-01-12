#include "hash_tables.h"
/**
* hash_table_get- retrieve a value associated with a key
* @ht: the hash table you want to look into
* @key: the key whose value you are looking for
* Return: value associated with the element, or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *head;
	unsigned long size;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		head = (ht->array)[i];
		while (head != NULL)
		{
			if (head->key == key)
				return (head->value);
			head = head->next;
		}
	}
	return (NULL);
}
