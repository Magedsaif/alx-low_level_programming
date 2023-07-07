#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value: value associated with the key, value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 *
 * In case of collision, add the new_node node at the beginning of the list
 *
 * This function should use the hash_djb2 function.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *position, *new_node;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	position = ht->array[index];
	while (position)
	{
		if (!strcmp(position->key, key))
		{
			free(position->value);
			position->value = strdup((char *)value);
			if (!position->value)
				return (0);
			return (1);
		}
		position = position->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup((char *)key);
	if (!new_node->key)
	{
		free(new_node);
		exit(0);
	}
	new_node->value = strdup((char *)value);
	if (!new_node->value)
	{
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
