#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: contain min values.
 * @max: contain max values.
 * Return: a pointer.
 */
int *array_range(int min, int max)
{
	int *z, i;

	if (min > max)
		return (NULL);
	z = malloc(sizeof(int) * (max - min + 1));
	if (z == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		z[i] =  min;
		min++;
	}
	return (z);
	free(z);
}
