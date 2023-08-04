#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
	int i = 7;

	while (n)
	{
		_putchar((n & (1 << i)) ? '1' : '0');
		i--;
	}
}
