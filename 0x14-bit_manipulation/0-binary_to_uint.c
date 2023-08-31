#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: takes in a binary numbers.
 * Return: return a integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int c = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		c = 2 * c + (b[i] - 48);
		i++;
	}
	return (c);
}
