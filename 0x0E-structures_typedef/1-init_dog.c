#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initializes a variable of struct
 * @d: the dog
 * @name: the dog's name
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
