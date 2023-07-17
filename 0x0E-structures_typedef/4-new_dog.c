#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dogs.
 * @name: takes in a name of dog.
 * @age: takes  in a age of dog.
 * @owner: takes in a owner of dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);
	t->name = name;
	t->age = age;
	t->owner = owner;
	return (t);
	free(t);
}
