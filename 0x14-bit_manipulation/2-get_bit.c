#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Takes in a integer.
 * @index: starting from 0 of the bit you want to get.
 * Return: the value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index < 63)
	{
		i = ((n >> index) & 1);
		return (i);
	}
	else
		return (-1);
}
