#include "dog_h"
#include <stdlib.h>
/**
 * free_dog - a function that frees
 * @d: the dogs
 */
void free_dogs(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
