#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: head var
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}
}
