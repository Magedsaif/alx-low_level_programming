#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the head of list with the type list_t
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}

