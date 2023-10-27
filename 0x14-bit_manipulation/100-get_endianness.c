#include "main.h"

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
