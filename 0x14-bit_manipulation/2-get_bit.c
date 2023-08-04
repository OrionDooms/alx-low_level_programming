#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Takes in a integer.
 * @index: the position of the integer.
 * Return: the value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n > 0)
	{
		bit = ((n >> index) & 1);
		return (bit);
	}
	else
		return (-1);
}
