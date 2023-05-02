#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_t *insert_nodeint_at_index - a function that inserts
 *  a new node at a given position.
 * @head: pointer to the head of list with the type list_t
 * @n:integar
 * @idx:index of the node
 * Return:  the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int count;

	count = 0;
	temp = *head;

	while (temp != NULL)/*checking the search boundaries*/
	{
		if (count == idx)
		{	
			temp = malloc(sizeof(listint_t));
			if (temp == NULL)
				return (NULL);
			temp->n = n;
			return (temp);/*found a match in a node*/
		}
		count++;/*counter to compare index with*/
		temp = temp->next;/*traversing through list*/
	}

	return (NULL);/*node doesn't exist*/
}
