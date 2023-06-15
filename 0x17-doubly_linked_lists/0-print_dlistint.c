#include"lists.h"
/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list.
 *
 * @h: pointer to head of the lies
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count;

	count = 0;
	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
