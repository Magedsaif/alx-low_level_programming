#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key.
 *
 * @size: the size of the array of the hash table
 * @key: is the key
 *
 * Return: the index at which the key/value
 * pair should be stored in the array of the hash table
 *
 * This function should use the hash_djb2 function.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index, index_at_range;

	if (size == 0)
		return (0);

	/*getting the index by giving the key toa hashing function*/
	index = hash_djb2(key);

	/* assuring that the index inside the hashtable array range*/
	index_at_range = index % size;

	return (index_at_range);
}



