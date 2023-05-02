#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: pointer to the head of list with the type list_t
 * @index:index of the node
 * Return:  the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next_node;
	unsigned int count = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		temp = temp->next;
		count++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;
	return (1);
}
