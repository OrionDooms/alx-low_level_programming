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
	int i = 0;
	char *str;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
