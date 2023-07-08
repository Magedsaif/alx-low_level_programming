#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int j;
	hash_node_t *free_node, *tmp;

	/* Iterate through each index of the hash table */
	for (j = 0; j < ht->size; j++)
	{
		free_node = ht->array[j];  /* Get the linked list at the current index */
		while (free_node)  /* Iterate through the linked list */
		{
			/* Store the next node in a temporary variable */
			tmp = free_node->next;
			free(free_node->key);  /* Free the memory allocated for the key */
			/* Free the memory allocated for the value */
			free(free_node->value);
			/* Free the memory allocated for the current node */
			free(free_node);
			free_node = tmp;  /* Move to the next node in the linked list */
		}
	}
	/* Free the memory allocated for the array in the hash table structure */
	free(ht->array);
	free(ht);  /* Free the memory allocated for the hash table structure */
}
