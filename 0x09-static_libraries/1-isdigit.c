#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: is the test case.
 * Return: 1 if c is a digit otherwise return:0
 */
int _isdigit(int c)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
