#include "main.h"
/**
 * print_alphabet - prints out the alphabet
 */
void print_alphabet(void)
{
	int i;
	char str[27] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
