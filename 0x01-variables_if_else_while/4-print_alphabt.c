#include <stdio.h>
/**
 * main - Entry point
 * description - This program prints out the alphabet
 * but not the letters e and q.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e')
		{
			if (c != 'q')
			{
				putchar(c);
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
