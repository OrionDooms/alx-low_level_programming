#include "main.h"
/**
 * swap_int - Swaps the value of two integer
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
