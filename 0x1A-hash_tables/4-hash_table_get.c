#include "hash_tables.h"
/**
 * hash_table_get -  a function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: returns string value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new;

	if (!ht || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];
	while (new)
	{
		if (!strcmp(new->key, key))
			return (new->value);
		new = new->next;
	}
	return (NULL);
}
