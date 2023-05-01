#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that
 *  returns the nth node of a listint_t linked list.
 * @head: pointer to the head of list with the type list_t
 * @index: index of the node in thew list
 * Return: the nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	count = 0;
	temp = head;

	while (temp != NULL)/*checking the search boundaries*/
	{
		if (count == index)
			return (temp);/*found a match in a node*/

		count++;/*counter to compare index with*/
		temp = temp->next;/*traversing through list*/
	}

	return (NULL);/*node doesn't exist*/
}
