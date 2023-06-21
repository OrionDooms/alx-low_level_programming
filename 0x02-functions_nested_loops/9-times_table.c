#include "main.h"
void times_table(void)
{
	int i, t;

	i = '0';
	t = '0';
	while (i <= '9')
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
