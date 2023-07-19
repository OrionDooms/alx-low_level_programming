#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name.
 * @name: take in a name.
 * @f: takes in a function.
 */
void print_name(char *name, void (*f)(char *))
{
	char *t;

	if (name == NULL || f == NULL)
		return;
	t = name;
	f(t);
}
