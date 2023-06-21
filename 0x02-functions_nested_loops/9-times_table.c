#include "main.h"
void times_table(void)
{
	int i, t;

	i = '0';
	t = '1';
	while (i <= '9')
	{
		//i = i * t;
		_putchar(i);
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
