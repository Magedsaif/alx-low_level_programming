#include"lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 *
 * @head: pointer to head of the lies
 *
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
