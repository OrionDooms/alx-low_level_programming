#include <stdio.h>
/**
 * main - Entry point
 * discription - This program prints a combinations of two digits but not
 * 10, 11, 20, 21, 22, 30, 31, 32, 33, 40, 41, 42, 43, 50, 51, 52, 53, 54, 55,
 * 60, 61, 62, 63, 64, 65, 66, 70, 71, 72, 73, 74, 75, 76, 77.
 * Return: 0 (Success)
 */
int main(void)
{
	int num, x;

	num = '0';
	x = '1';
	while (num <= '8')
	{
		while (x <= '9')
		{
			if (num == '1' && x == '0')
				x = '2';
			else if (num == '2' && x == '0')
				x = '3';
			else if (num == '3' && x == '0')
				x = '4';
			else if (num == '4' && x == '0')
				x = '5';
			else if (num == '5' && x == '0')
				x = '6';
			else if (num == '6' && x == '0')
				x = '7';
			else if (num == '7' && x == '0')
				x = '8';
			else
			{
				putchar(num);
				putchar(x);
				putchar(',');
				putchar(' ');
				x++;
			}
		}
		x = '0';
		num++;

	}
	putchar('\n');
	return (0);
}
