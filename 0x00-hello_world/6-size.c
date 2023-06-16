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

	printf("Size of a char: %lu byte", sizeof(c));
	printf("Size of an int: %lu byte", sizeof(i));
	printf("Size of a long int: %lu byte", sizeof(l));
	printf("Size of a long long int: %lu byte", sizeof(o));
	printf("Size of a float: %lu float", sizeof(f));

	return (0);
}
