#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: takes in a string*
 */
void puts_half(char *str)
{
	int i, a;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		a = i / 2;
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}
	else if (i % 1 == 0)
	{
		a = ((i + 1) / 2);
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}
	_putchar('\n');
}
