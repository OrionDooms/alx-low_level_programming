#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: takes in a number.
 * @m: takes in a second number.
 * Return: returns the number of bits that was flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = n ^ m, i = 0;

	while (flip)
	{
		if ((flip & 1) == 1)
			i++;
		flip >>= 1;
	}
	return (i);
}
