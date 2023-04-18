#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 *
 * @d: pointer to the elements of structure
 * Return:If an element of d is NULL,
 * print (nil) instead of this element
 * If d is NULL print nothing.
*/
void print_dog(struct dog *d)
{

if (d == NULL)
{
;
}

else
	{
		if (d->name == NULL)/*checks if name is NULL*/
		{
			printf("Name: (nil)\n");
		}
		else
			printf("Name: %s\n", d->name);/*printing dog name*/

		printf("Age: %f\n", d->age);/*printing dog age*/

		if (d->owner == NULL)/*checks if owner is NULL*/
		{
			printf("Owner: (nil)\n");
		}
		else
			printf("Owner: %s\n", d->owner);/*printing dog Owner*/


	}
}
