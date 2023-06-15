#include"lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list.
 *
 * @head: pointer to head of the lies
 * @n: value
 *
 * Return: the address of the new element,
 * or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*storing data in new node*/
	new_node->next = NULL;
	new_node->prev = NULL;
	if ((*head) == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
}
