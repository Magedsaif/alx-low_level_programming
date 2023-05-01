#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the head of list with the type list_t
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp_node = *head;
		free(*head);
		*head = temp_node->next;
	}
	*head = NULL;
}
