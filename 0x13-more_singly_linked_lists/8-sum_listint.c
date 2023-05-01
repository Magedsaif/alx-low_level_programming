#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head of list with the type list_t
 * Return: sum of all the data (n) of a listint_t linked list.
 * or (0) if list is empty
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum, num;

	sum = 0;
	temp = head;

	if (temp == NULL)
		return (0);

	while (temp)/*checking the boundaries*/
	{
		/*updating the value of num by traversing through list*/
		num = temp->n;
		/*adding to the sum*/
		sum = sum + num;
		/*updating the value of temp by traversing through list*/
		temp = temp->next;
	}
	return (sum);
}
