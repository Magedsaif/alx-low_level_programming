#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the head of list with the type list_t
 * Return: nothing
*/
int pop_listint(listint_t **head)
{	
	listint_t *temp_node;

	if (head == NULL)
		return (0);
	else
	{
	temp_node = (*head);

	*head = (*head)->next;

	free(temp_node);
	}
	return(temp_node->n);
}
