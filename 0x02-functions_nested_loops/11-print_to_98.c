#include "main.h"
void print_to_98(int n)
{
	int i, c;

	i = '0';
	c = '0';
	while (i <= '9')
	{
		while(c <= '9')
		{
			if (i == '9' && c == '9')
			{
				break;
			}
			else
			{
				_putchar(i);
				_putchar(c);
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		c = '0';
		i++;
	}
	_putchar('\n');

}
