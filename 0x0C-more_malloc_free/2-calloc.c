#include "main.h"
#include <stdlib.h>
/**
 *  _calloc - allocates memory for an array.
 *  @nmemb:  allocates memory for an array.
 *  @size: elements of size bytes.
 *  Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(nmemb * size);
	if (z == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		z[i] = 0;
		i++;
	}
	return (z);
}
