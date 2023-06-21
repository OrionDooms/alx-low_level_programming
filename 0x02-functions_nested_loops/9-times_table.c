#include "main.h"
void times_table(void)
{
	int i, t, c;

	i = '0';
	t = '0';
	c = '0';
	while (i <= '0')
	{
		while (c <= '9')
		{
			while (t <= '9')
			{
				_putchar(t);
				_putchar(',');
				_putchar(' ');
				t++;
			}
			_putchar('\n');
			t = '0';
			c++;
		}
		c = '0';
		i++;
	}
}
