#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n:is the number of integers passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{ 
	va_list ap;
        unsigned int i;

        if (separator == NULL || n == 0)
                return;
        va_start(ap, n);
        for (i = 0; i <= n - 1; i++)
        {
                printf("%d", va_arg(ap, int));
                printf("%s", separator);
        }
        printf("\n");
        va_end(ap);

}
