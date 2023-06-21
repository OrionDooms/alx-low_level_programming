#include "main.h"
/**
 * print_last_digit - prints the last digit of numbers.
 * @i: - input numbers in to the function.
 * Return: the value of the last digit.
 */
int print_last_digit(int i)
{
	int last;

	if (i < 0)
	{
		i = -i;
	}
	last = i % 10;
	if (last < 0)
	{
		last = -1;
	}
	_putchar(last + '0');
	return (last);
}
