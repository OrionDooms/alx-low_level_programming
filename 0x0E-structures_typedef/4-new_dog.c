#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	t->name = malloc(sizeof(char) * (strlen(name + 1 )));
	if (t->name == NULL)
	{
		free(t);
		return (NULL);
	}
	t->owner = malloc(sizeof(char) * (strlen(owner + 1)));
	if (t->owner == NULL)
	{
		free(t);
		free(t->name);
		return (NULL);

	}
	strcpy(t->name = name);
	t->age = age;
	strcpy(t->owner = owner);
	return (t);
	free(t);
}
