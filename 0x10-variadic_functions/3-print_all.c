#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints types of arguments, followed by a new line.
 * @format: arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, format);
	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				if (format[i + 1] != 0)
					printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				if (format[i + 1] != 0)
					printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				if (format[i + 1] != 0)
					printf(", ");
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				if (format[i + 1] != 0)
					printf(", ");
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
