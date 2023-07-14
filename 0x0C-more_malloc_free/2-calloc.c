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
	unsigned int *z, i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(nmemb * size);
	if (z == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
			*z = (*z + i * size + j);
	}
	return (z);
}
