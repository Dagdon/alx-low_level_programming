#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
