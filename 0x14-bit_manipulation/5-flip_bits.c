#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip;

	flip = n ^ m;
	return (flip);
}