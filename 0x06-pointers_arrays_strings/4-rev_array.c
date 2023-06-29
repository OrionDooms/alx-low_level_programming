#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer of a array.
 * @n: the amount of integers in a array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int s;

	i = 0;
	while (i < n)
	{
		s = a[i];
		a[i] = a[n - 1];
		a[n - 1] = s;
		i++;
		n--;
	}
}
