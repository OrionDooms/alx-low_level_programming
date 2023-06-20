#include "main.h"
/**
 * main - Entry point
 * description - This program print out _putchar
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char str[8] = "_putchar";

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
