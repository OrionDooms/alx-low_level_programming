#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: for the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, c;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 2;
			while (j <= size - i)
			{
				_putchar(' ');
				j++;
			}
			c = 0;
			while (c <= i)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			i++;
		}
	}
}
