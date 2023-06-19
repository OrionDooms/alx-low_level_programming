#include <stdio.h>
/**
 * main - Entry point
 * discription - This program prints all possible combinations of three digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int num, x, p;

	num = '0', x = '1', p = '2';
	while (num <= '1')
	{
		while (x <= '9')
		{
			while (p <= '9')
			{
				putchar(num);
				putchar(x);
				putchar(p);
				putchar(',');
				p++;
			}
			p = '3';
			x++;
		}
		x = '0';
		num++;
	}
	putchar('\n');
	return (0);
}
