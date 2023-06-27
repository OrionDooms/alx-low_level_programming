#include "main.h"
/**
 * rev_string - reverses a string
 * @s: takes in a string
 */
void rev_string(char *s)
{
	int a, i;

	i = 0;
	a = 0;
	while (s[a] != '\0')
	{
		i = a;
		a++;
	}
	while (s[i] > 0)
	{
		_putchar(s[i]);
		i--;
	}
}
