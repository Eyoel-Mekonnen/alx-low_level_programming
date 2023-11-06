#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intializes types struct dog
 * @d: dog structures passeed
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = (struct dog *)malloc(sizeof(struct dog));
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
