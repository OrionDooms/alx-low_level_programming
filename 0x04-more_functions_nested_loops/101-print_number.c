#include "main.h"

void print_number(int n)
{
	int i;
	char c;

	i = 0;
	while (i <= n)
	{
		if (i == n)
		{
			c = n;
		}
		i++;
	}
	_putchar(c);
	return;
}
