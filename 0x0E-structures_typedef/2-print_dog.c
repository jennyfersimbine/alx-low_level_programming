#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print struct dog
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	struct dog *ptr;

	if (d == NULL)
		return;
	ptr = d;
	if ((ptr->name) == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", ptr->name);

	printf("Age: %f\n", ptr->age);

	if ((ptr->owner) == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", ptr->owner);
}
