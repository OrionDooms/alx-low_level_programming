#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - given as a parameter on each element of an array.
 * @array: takes in array.
 * @size: size of the array.
 * @action: a function that takes in a array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == 0)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
