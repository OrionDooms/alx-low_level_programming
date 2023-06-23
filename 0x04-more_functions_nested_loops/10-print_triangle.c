#include "main.h"

void print_triangle(int size)
{
	int i, j;

	i = 0;
	j = 0;
	_putchar('s');
	while (i < size)
	{
		while (j <= size)
		{
			if (j < size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('*');
			}
			j++;
		}
		i--;
	}
	_putchar('\n');
}
