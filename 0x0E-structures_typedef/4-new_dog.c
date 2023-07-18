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
	char *ndog, *odog;

	ndog = strdup(name);
	odog = strdup(owner);
	if (ndog == NULL || odog == NULL || age < 0)
	{
		return (NULL);
		free(ndog);
		free(odog);
	}
	t = malloc(sizeof(dog_t));
	if (t == NULL)
	{
		return (NULL);
		free(t);
	}
	t->name = ndog;
	t->age = age;
	t->owner = odog;
	return (t);
	free(t);
}
