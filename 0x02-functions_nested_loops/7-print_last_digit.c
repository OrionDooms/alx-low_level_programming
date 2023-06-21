#include "main.h"
/**
 * print_last_digit - prints the last digit of numbers.
 * @i: - input numbers in to the function.
 * Return: the value of the last digit.
 */
int print_last_digit(int i)
{
	int c;

	if (i < 0)
	{
		i = -i;
	}
	c = i % 10;
	_putchar(c + '0');
	return (c);
}
