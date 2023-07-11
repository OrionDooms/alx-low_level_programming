#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: take in the width of the array.
 * @height: Takes in the Height of a array.
 * Return: a pointer to the array or NULL.
 */
int **alloc_grid(int width, int height)
{
	unsigned int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	int **z = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
		z[i] = malloc(sizeof(int) * height);
	return (z);
	free(z);
}
