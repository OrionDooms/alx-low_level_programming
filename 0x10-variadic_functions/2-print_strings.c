#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n:is the number of integers passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	while (i <= n)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}
