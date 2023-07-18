#include "dog.h"
#include <string.h>
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
	t->name = malloc(strlen(name));
	if (t->name == NULL)
	{
		free(t);
		return (NULL)
	}
	else
		t->name = name;
	t->age = age;
	t->owner = malloc(strlen(owner));
	if (t->owner == NULL)
	{
		free(t);
		return (NULL);
	}
	else
		t->owner = owner;
	return (t);
	free(t);
}
