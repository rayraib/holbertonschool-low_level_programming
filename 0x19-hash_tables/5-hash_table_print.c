#include "hash_tables.h"
/**
* hash_table_print- print a hash table
* @ht: the hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int size;
	hash_node_t *head;
	int first_flag = 0;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		head = (ht->array)[i];
		while (head != NULL)
		{
			if (first_flag == 0)
			{
				printf("{'%s': '%s'", head->key, head->value);
				first_flag = 1;
				head = head->next;
			}
			else
			{
				printf(", '%s' : '%s'", head->key, head->value);
				head = head->next;
			}
		}
		if (i == size - 1 && first_flag == 0)
			printf("{");
	}
	printf("}\n");
}
