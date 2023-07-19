#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: take in a name.
 * @f: takes in a function.
 */
void print_name(char *name, void (*f)(char *))
{
	char *t = name;

	f(t);
}
