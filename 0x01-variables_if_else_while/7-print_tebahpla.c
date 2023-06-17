#include <stdio.h>
/**
 * main -Entry point/
 * description - This program prints the alphabet in reverse.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
