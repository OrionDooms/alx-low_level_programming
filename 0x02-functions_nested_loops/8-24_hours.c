#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i, a, b, c;

	i = '0';
	a = '0';
	b = '0';
	c = '0';
	while (i <= '2')
	{
		while (a <= '9')
		{
			if (a != '4')
			{
				while (b <= '5')
				{
				while (c <= '9')
				{
					_putchar(i);
					_putchar(a);
					_putchar(':');
					_putchar(b);
					_putchar(c);
					_putchar('\n');
					c++;
				}
				c = '0';
				b++;
				}
			b = '0';
			a++;
			}
			else
				break;
		}
		a = '0';
		i++;
	}
}
