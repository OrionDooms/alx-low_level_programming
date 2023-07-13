#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  allocates memory.
 * @b: Takes in a ingters
 * Return: a pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b * sizeof(unsigned int));
	if (a == NULL)
		exit(98);
	return (a);
}
