#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the amount of lines that needs to be drawn
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
