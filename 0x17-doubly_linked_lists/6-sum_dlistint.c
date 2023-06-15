#include"lists.h"
/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 *
 * @head: pointer to head of the list
 * Return: sum or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{	
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
