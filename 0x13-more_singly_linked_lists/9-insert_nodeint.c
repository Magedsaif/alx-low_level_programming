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
	listint_t *temp, *new;
	unsigned int i;

	temp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	{
		new->n = n;
	}

	if (idx == 0)
	/*function inserts the new node at the beginning of the list */
	{
		new->next = temp;
		*head = new;/*making it the new head*/
		return (new);
	}
	/*
	*scan the list til reaching the node just before the index
	*where the new node should inserted
	*/
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{

		temp = temp->next;/*traversing*/
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;/*inserting the new node*/
	temp->next = new;

	return (new);
}
