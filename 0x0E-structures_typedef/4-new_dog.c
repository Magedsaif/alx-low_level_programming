#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: a new dog stored
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;/*declaring a pointer to a block of memory called newdog*/

newdog = malloc(sizeof(dog_t)); /*allocating memory to anew dog to be stored*/

if (newdog == NULL)
	return (NULL);
if (name != NULL)/*allocating memory to a new dog name to be stored*/
{
newdog->name = malloc(strlen(name) + 1);

if (newdog->name != NULL)
	strcpy(newdog->name, name);/*copy the new dog name*/
else
{
	free(newdog);
	return (NULL);
}
}
else
	{return (NULL); }

newdog->age = age; /*store the new age given*/
if (owner != NULL)/*allocating memory to a new dog owner to be stored*/
{
newdog->owner = malloc(strlen(owner) + 1);

if (newdog->owner != NULL)
	strcpy(newdog->owner, owner);/*copy the new dog name*/
else
{
	free(newdog);
	free(newdog->name);
	return (NULL);
}
}
else
{
	return (NULL);
}
return (newdog);
}
