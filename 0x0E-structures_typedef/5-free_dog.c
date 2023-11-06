#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated by dog structure
 * @d: the dog structure passed
 */
void free_dog(dog_t *d)
{
	while (d)
	{
		free(d);
		free(d->name);
		free((*d).owner);
	}
}
