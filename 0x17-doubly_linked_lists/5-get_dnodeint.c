#include"lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 *
 * @head: pointer to head of the list
 * @index: index of the desired node
 * Return: Nothing
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter;

	counter = 0;
	temp = head;
	while (temp != NULL && counter != index)
	{
		counter++;
		temp = temp->next;
	}
	if (counter == index)
		return (temp);
	else
		return (NULL);
}
