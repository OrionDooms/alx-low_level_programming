#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Takes in a integer.
 * @index: the position of the integer.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
