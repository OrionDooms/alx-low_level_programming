#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: Takes in a string.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		if (*s != '\0')
		{
			_print_rev_recursion(s + 1);
			i++;
		}
		if (i >= 0)
		{
			_putchar(*s);
		}
	}
}
