#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: passed number to the function
 */
void print_to_98(int n)
{
	if (n <= 0)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
	}
	else if (n > 0)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
	}
	printf("\n");
}
