#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the amount of lines that needs to be drawn
 */
void print_diagonal(int n)
{
	int i, a;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			a = 0;
			while (a < i)
			{
				_putchar(' ');
				a++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
