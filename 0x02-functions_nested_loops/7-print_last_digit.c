#include "main.h"

int print_last_digit(int s)
{
	static int last = 0;
	last = s;
	_putchar(last);
	return (0);
}
