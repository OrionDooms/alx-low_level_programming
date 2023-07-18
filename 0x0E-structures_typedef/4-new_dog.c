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

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	ndog = malloc(sizeof(char) * (strlen(name + 1)));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog = strdup(name);
	odog = malloc(sizeof(char) * (strlen(owner + 1)));
	if (odog == NULL)
	{
		free(ndog);
		free(odog);
		return (NULL);
	}
	odog = strdup(owner);
	t = malloc(sizeof(dog_t));
	if (t == NULL)
	{
		free(ndog);
		free(odog);
		free(t);
		return (NULL);
	}
	t->name = ndog;
	t->age = age;
	t->owner = odog;
	return (t);
	free(t);
}
