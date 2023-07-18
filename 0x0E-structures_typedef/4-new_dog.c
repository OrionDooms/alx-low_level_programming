#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dogs.
 * @name: takes in a name of dog.
 * @age: takes  in a age of dog.
 * @owner: takes in a owner of dog.
 * Return: pointer or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	t = malloc(sizeof(dog_t));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	t->name = malloc(sizeof(char) * (strlen(name)));
	if (t->name == NULL)
	{
		free(t->name);
		free(t);
		return (NULL);
	}
	t->owner = malloc(sizeof(char) * (strlen(owner)));
	if (t->owner == NULL)
	{
		free(t->name);
		free(t->owner);
		free(t);
		return (NULL);
	}
	t->name = strcpy(t->name, name);
	t->age = age;
	t->owner = strcpy(t->owner, owner);
	return (t);
	free(t);
}
