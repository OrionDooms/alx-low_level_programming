#include "main.h"
/**
 * more_numbers - print 10 times the numbers 0 to 14
 */
void more_numbers(void)
{
	int i, x;
	char str[20] = "01234567891011121314";

	x = 0;
	while (x <= 9)
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		x++;
		_putchar('\n');
	}
}
