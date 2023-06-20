#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i, x;
	char str[27] = "abcdefghijklmnopqrstuvwxyz";

	x = 0;
	while (x <= 9)
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		x++;
		_putchar('\n');
	}
}
