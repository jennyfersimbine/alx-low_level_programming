#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializevariable of type dog
 * @d: pointer to struct
 * @name: of dog
 * @age: of dog
 * @owner: name of own
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	if (d == NULL)
	{
		printf("Ok\n");
		return;
	}
	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
