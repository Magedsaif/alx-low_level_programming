#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int j = 0;
	unsigned int key;
	hash_node_t *print;

	if (ht == NULL)  /* Check if hash table is NULL */
		return;
	key = ht->size - 1;  /* Calculate the last index of the hash table */
	while (!ht->array[key] && key != 0)  /* Find the last non-empty index */
		key--;

	printf("{");
	/* Iterate through all the indices of the hash table */
	for (j = 0; j < ht->size; j++)
	{
		print = ht->array[j];  /* Get the linked list at the current index */
		while (print)  /* Iterate through the linked list */
		{
			/* Print the key-value pair */
			printf("'%s': '%s'", print->key, print->value);
			if (j != key)  /* Check if it's not the last non-empty index */
			/* Add a comma and space for separating key-value pairs */
				printf(", ");
			print = print->next;  /* Move to the next node in the linked list*/
		}
	}
	printf("}");  /* Print the closing curly brace */
	printf("\n");  /* Print a new line */
}
