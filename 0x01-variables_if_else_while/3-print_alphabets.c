#include <stdio.h>
/**
 * main - Entry point
 * description - This program uses the  putchar function to print out the
 * alphabet in lowercase and in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;
	int b;

	c = 'a';
	b = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
