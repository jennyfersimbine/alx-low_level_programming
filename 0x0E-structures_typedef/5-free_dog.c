#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free mem allocated
 * @d: struct to free
 */

void free_dog(dog_t *d)
{
	dog_t *fdog;

	if (d == NULL)
		return;
	fdog = d;
	free(fdog->name);
	free(fdog->owner);
	free(fdog);
}
