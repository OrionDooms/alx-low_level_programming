#include "main.h"
/**
 * main - Entry print_alphabet
 * description - The print_alphabet function prints out the alphabet
 * Return: Always
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
