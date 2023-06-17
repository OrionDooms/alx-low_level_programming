#include <stdio.h>
/**
 * main - Entry point
 * description - This program prints out 0 to 9 with commas and spaces.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
