#include "search_algos.h"
/**
 *  binary_search - a function that searches for a the value in an array
 *  of integers using the binary search algorithm.
 *  @array: array is a list of integers.
 *  @size: size is the number of elements in array.
 *  @value: value is the value to search for.
 *  Return: Return the first index where value is located and value
 *  is not present in array or if array is NULL it will return a -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int a = 0, c = 0;
	int b = size - 1;
	
	if (value <= 0 || array != NULL)
	{
		while (a <= b)
		{
			c = (a + b) / 2;
			printf("Searching in array:");
			printf("\n");
			if (array[c] == value)
				return c;
			else if (array[c] < value)
				a = c + 1;
			else
				b = c -1;
		}
	}
	return (-1);
}
