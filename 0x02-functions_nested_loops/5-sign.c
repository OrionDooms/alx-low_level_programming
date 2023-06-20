#include "main.h"
/**
 * print_sign - checks if the number is greater or less than zero or is zero.
 * @n: The given number that is use for comparing.
 * Return: 1 if it's greater, return: -1 if it's less
 * and return: 0 if it's zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
