#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog -  initialize a variable from dog description.
 * @d: pointer a  initialize a variable.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
