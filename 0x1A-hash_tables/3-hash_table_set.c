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
 * This function should use the hash_djb2 function
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node;

	if (!ht || !ht->size || !strlen(key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = add_node(&ht->array[index], key, value);
	if (new_node != NULL)
		return (1);
	else
		return (0);
}
/**
 * add_node - a function that adds a node
 *
 * @head: head of linked list
 * @key: the key
 * @value: the value
 *
 * Return:a new node.
*/
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{

	hash_node_t *new_node, *temp_node, *temp_node2;
	char *temp_str;

	temp_node = *head;
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (NULL);
	if (value == NULL)
		new_node->value = NULL;
	else
	{
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (NULL);
	}
	if (temp_node == NULL)
		new_node->next = NULL;
	else
	{
		temp_node2 = temp_node;
		while (temp_node2 != NULL)
		{
			if (strcmp(temp_node2->key, new_node->key) == 0)
			{
				temp_str = temp_node2->value;
				temp_node2->value = strdup(value);
				free_all(new_node, temp_str);
				return (temp_node2);
			}
			temp_node2 = temp_node2->next;
		}
		new_node->next = temp_node;
		*head = new_node;
	}
	*head = new_node;
	return (new_node);
}

/**
 * free_all - a function that free all upon calling
 *
 * @new_node: new node to take the values from
 * @s: string
 *
 * Return: NOTHING
*/
void free_all(hash_node_t *new_node, char *s)
{
	free(new_node->key);
	free(new_node->value);
	free(new_node);
	free(s);
}
