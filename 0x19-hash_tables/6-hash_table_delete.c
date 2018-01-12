#include "hash_tables.h"
/**
* hash_table_delete - delete a hash table
* @ht: table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long size;
	hash_node_t *head;
	hash_node_t *tmp;
	unsigned int i;

	if (ht != NULL)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			head = (ht->array)[i];
			tmp = head;
			while (tmp != NULL)
			{
				head = head->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = head;
			}
		}
		free(ht->array);
		free(ht);
	}
}
