#include <stdio.h>
/*
 * main -  This program prints the size of various types
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

	printf("Size of a char: %zu byte", sizeof(c));
	printf("Size of an int: %zu byte", sizeof(i));
	printf("Size of a long int: %zu byte", sizeof(l));
	printf("Size of a long long int: %zu byte", sizeof(o));
	printf("Size of a float: %zu float", sizeof(f));

	return (0);
}
