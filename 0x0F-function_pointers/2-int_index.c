#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: takes in array.
 * @size: size of array.
 * @cmp: a function that takes in a integer.
 * Return: integer of the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if ((cmp(array[i]) > 0))
			return (i);
		i++;
	}
	return (-1);
}
