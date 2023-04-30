#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - aa function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to the head of list with the type list_t
 * @n:integar
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	ptr = *head;/*making ptr and head point at the same location*/

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;/*updating the n part of new node with n entered*/
	new_node->next = NULL;/*make point to a NULL*/

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (ptr->next != NULL)/*traversing through all nodes till the last one*/
		{
			ptr = ptr->next;/*traversing forward*/
		}
		ptr->next = new_node;/*assinging the new node to the next (lastest) node*/
	}
	return (new_node);
}
