#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: the parameters give amount.
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = n; i >= 0; i = va_arg(args, unsigned int))
	{
		sum = sum + i;
	}
	va_end(args);
	return (sum);
}
