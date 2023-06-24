#include "main.h"
/**
 * times_table -prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, a, n;

	i = 0;
	while (i <= 9)
	{
		a = 0;
		while (a <= 9)
		{
			n = i * a;
			if (n < 10)
			{
				_putchar(n + '0');
				if (a <= 8)
				{
					_putchar(',');
					_putchar(' ');
					if ((i <= 1) || (i <= 3 && n < 8))
						_putchar(' ');
					if ((i > 4 && n < 5) || (i == 4 && n <= 4))
					_putchar(' ');
				}
			}
			else if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (a <= 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			a++;
		}
		_putchar('\n');
		i++;
	}
}
