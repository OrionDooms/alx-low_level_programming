#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a new string
 * which is a duplicate of the string.
 * @str: takes in a pointer.
 * Return: Return a duplicate pointer or NULL.
 */
char *_strdup(char *str)
{
	char *z;
	int i = 0;

	z = malloc(sizeof(char) * 3);
	if (str == NULL)
		return (NULL);
	else if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			z[i] = str[i];
			i++;
		}
		return (z);
	}
	else
		return (NULL);
	free(z);
}
