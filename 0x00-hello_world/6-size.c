#include <stdio.h>
/**
 * main - Entry point
 * description - This program prints the size of various types
 *
 * Return: 0 (success)
 */
int main(void)
{
	size_t c, i, l, o, f;

	c = sizeof(char);
	i = sizeof(int);
	l = sizeof(long int);
	o = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", (c));
	printf("Size of an int: %lu byte(s)\n", (f));
	printf("Size of a long int: %lu byte(s)\n", (l));
	printf("Size of a long long int: %lu byte(s)\n", (o));
	printf("Size of a float: %lu float(s)\n", (f));
	return (0);
}
