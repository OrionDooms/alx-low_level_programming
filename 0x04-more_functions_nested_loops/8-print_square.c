#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: The amount of # that needed for the square
 */
void print_square(int size)
{
	int i, a;

	a = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < size)
		{
			i = 0;
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			a++;
			_putchar('\n');
		}
	}
}
