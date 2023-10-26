#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Takes in a integer.
 * @index: the position of the integer.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n = ((1 << index) | *n);
		return (1);
	}
	else
		return (-1);
}
