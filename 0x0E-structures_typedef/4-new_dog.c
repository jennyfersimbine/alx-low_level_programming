#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * new_dog - create new dog record
 * @name: of dog (make copy)
 * @age: of dog
 * @owner: of dog (make copy)
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	strcpy(ndog->name, name);

	ndog->age = age;
	ndog->owner = malloc(strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	strcpy(ndog->owner, owner);

	return (ndog);
}
