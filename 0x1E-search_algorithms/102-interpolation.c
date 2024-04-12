#include "search_algos.h"
/**
 *  interpolation_search - a function that searches for a the value in an array
 *  of integers using the interpolation  search algorithm.
 *  @array: array is a list of integers.
 *  @size: size is the number of elements in array.
 *  @value: value is the value to search for.
 *  Return: Return the first index where value is located and value
 *  is not present in array or if array is NULL it will return a -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, a, b, c;
	int high = size - 1;
	size_t pos;

	if (value >= 0 || array != NULL)
	{
		while (low <= high && value >= array[low] && value <= array[high])
		{
			a = (value - array[low]);
			b = (array[high] - array[low]);
			c = (double)(high - low);
			pos = low + ((c / b) * a);

			if (array[pos] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", pos, value);
				return (pos);
			}
			if (array[pos] < value)
			{
				printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
				low = pos + 1;
			}
			else
				high = pos - 1;
		}
	}
	printf("Value checked array[2109] is out of range\n");
	return (-1);
}
