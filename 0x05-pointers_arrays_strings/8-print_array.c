#include "main.h"
/**
 * print_array - print array
 * @a: takes in array
 * @n: the amount of integers
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (a[i] < a[n])
	{
		printf("%d", a[i]);
		if (n > i)
		{
			printf(", ");
		}
		i++;
		printf("\n");
	}
}
