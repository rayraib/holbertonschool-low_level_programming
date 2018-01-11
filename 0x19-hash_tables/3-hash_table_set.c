#include "hash_tables.h"
hash_node_t *create_new_node(const char *key, const char *value);
/**
* hash_table_set - add an element to the hash table
* @ht: pointer to the hash table where you want to add or update the key/value
* @key: key
* @value: value associated with key
* Return: 1 success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	unsigned long int size;
	hash_node_t *head = NULL;
	hash_node_t *new_node = NULL;

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	head = (ht->array)[index];
	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0);
	if (head == NULL)
	{
		head = new_node;
		return (1);
	}
	new_node->next = head;
	head = new_node;
	printf("key: %s\n", head->key);
	return (1);
}
/**
* create_new_node: create a new hash_node_t type node
* @key: key
* @value: value
* Return: Pointer to the new hash_node_t type node
*/
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	return (new_node);
}
