#include "search_algos.h"
/**
 *  linear_search - a function that searches for a the value in an array
 *  of integers using the Linear search algorithm.
 *  @array: array is a list of integers.
 *  @size: size is the number of elements in array.
 *  @value: value is the value to search for.
 *  Return: Return the first index where value is located and value
 *  is not present in array or if array is NULL it will return a -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (value >= 0 || array != NULL)
	{
		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
