#include <stdio.h>
/**
 * main - Entry point
 * description - This progam uses putchar function to print out the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
