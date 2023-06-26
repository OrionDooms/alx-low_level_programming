#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: takes in a string
 */
void print_rev(char *s)
{
	int a, i;

	i = 0;
	a = 0;
	while (s[a] != '\0')
	{
		i = a;
		a++;
	}
	while (s[i] != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
