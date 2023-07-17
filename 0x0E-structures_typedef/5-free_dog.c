#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	d->name = malloc(name);
	d->age = malloc(age);
	d->owner = malloc(owner);
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
