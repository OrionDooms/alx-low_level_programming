#include "main.h"
/**
 * _abs - takes a value and if it is negative it turn it to positive value
 *  and if the value is positive than it just returns the positive value
 *  and if it a zero value
 *  and than it return 0.
 *  @c: - holds the value that will be test.
 *  Return: 0 if its zero,
 */

int _abs(int c)
{
	int x;

	x = 0;
	if (c < 0)
	{
		x = c * -1;
		return (x);
	}
	else if (c > 0)
	{
		x = c;
		return (x);
	}
	else
		return (x);
}
