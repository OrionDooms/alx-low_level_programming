#include <stdio.h>
/**
 * main - Entry point
 * description - This program prints the size of various types
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int o;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(o));
	printf("Size of a float: %lu float(s)\n", sizeof(f));

	return (0);
}
