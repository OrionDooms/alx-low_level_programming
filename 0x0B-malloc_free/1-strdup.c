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
	int i, a;

	i = 0;
	a = 0;
	if (str == 0)
		return (NULL);
	while (str[a] != '\0')
		a++;
	z = malloc(sizeof(char) * a + 1);
	if (str)
	{
		while (str[i] != '\0')
		{
			z[i] = str[i];
			i++;
		}
		return (z);
		free(z);
	}
	else
		return (NULL);
	free(z);
}
