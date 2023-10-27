#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: return (0) if big endian or return (1) if little endian.
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;
	if (*c == 1)
		return (1);
	else
		return (0);
}
