#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: pointer to the head of list with the type list_t
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
