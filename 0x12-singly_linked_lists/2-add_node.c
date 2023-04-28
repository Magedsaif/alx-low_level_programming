#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * If str is NULL, print [0] (nil)
 * @head: pointer to the head of list with the type list_t
 * @str: pointer to char
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	/*getting the count of elments (i), in str array of chars*/
	while (str[i] != '\0')
	{
		i++;
	}
	/*allocating memory to new node with type list_t*/
	new = malloc(sizeof(list_t));
	/*assuring it doesn't point to NULL*/
	if (new == NULL)
		return (NULL);

	/*duplicating the contents of str in str element of the new node created*/
	new->str = strdup(str);
	/*updating len element with the length of the new str entered*/
	new->len = i;
	/*updating the next pointer with a pointer to the new node*/
	new->next = *head;

	*head = new;
	return (new);
}
