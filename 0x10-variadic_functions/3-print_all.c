#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n:is the number of integers passed to the function.
 */
void print_all(const char * const format, ...)
{
        va_list ap;
        unsigned int i;

        va_start(ap, format);
        for (i = 0; i <= format; i++)
        {
                printf("%d", va_arg(ap, char));
        }
        printf("\n");
        va_end(ap);

}
