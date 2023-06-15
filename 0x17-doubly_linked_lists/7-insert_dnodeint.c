#include"lists.h"
/**
 * insert_dnodeint_at_index -  a function that inserts a new node
 * at a given position.
 *
 * @h: pointer to head of the list
 * @idx:.
 * @n:.
 * Return: new node if list is empty
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int counter = 1;

	temp = *h;
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = new_node;
			return (new_node);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp->next != NULL && counter != idx)
	{
		temp = temp->next;
		counter++;
	}
	if (counter == idx)
	{
		new_node->prev = temp;
		new_node->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
