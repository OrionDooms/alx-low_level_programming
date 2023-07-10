#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: - size of array.
 * @c: characters.
 * Return: array of characters, or a NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int i = 0;

	z = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		if (z == 0)
		{
			return (NULL);
		}
		z[i] = c;
		i++;
	}
	return (z);
	free(z);
}
