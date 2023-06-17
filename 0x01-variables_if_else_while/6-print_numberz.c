#include <stdio.h>
/**
 * main - Entry point
 * description - This program uses putchar to print out numbers
 * for 0 to 9.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
