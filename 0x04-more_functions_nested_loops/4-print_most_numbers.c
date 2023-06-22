#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9,
 * but don't print 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
