#include <stdio.h>
/**
 * main - Entry point
 * description - This program prints all the numbers of base 16
 *  in lowercase meaning printing 0 to 9 and a to f.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	int c;

	num = '0';
	c = 'a';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
