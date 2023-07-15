#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated old_size.
 * @old_size: is allocated memory space for ptr.
 * @new_size: is a new memory block.
 * Return: copied ptr to the newly allocated space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *xptr, *cpy;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	xptr = malloc(new_size);
	cpy = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			xptr[i] = cpy[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			xptr[i] = cpy[i];
	}
	return (xptr);
	free(ptr);
}
