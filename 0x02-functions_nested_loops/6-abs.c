#include "main.h"

int _abs(int c)
{
	if (c > 0)
	{
		_putchar(c);
	}
	else if (c < 0)
		c = (-1) * c;
		_putchar(c);
	return (0);
}
