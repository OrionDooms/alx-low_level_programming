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
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp(array[i]) > 0))
			return (i);
	}
	return (-1);
}
