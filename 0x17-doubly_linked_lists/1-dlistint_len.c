#include"lists.h"
/**
 * dlistint_len -  a function that returns the number of
 * elements in a linked dlistint_t list.
 *
 * @h: pointer to head of the lies
 *
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count;

	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
