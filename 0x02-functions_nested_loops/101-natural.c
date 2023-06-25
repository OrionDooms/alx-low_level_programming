#include <stdio.h>
/**
 * main - prints multiples of 3 or 5 from 1024 that add everything up.
 * Return: 0
 */
int main(void)
{
	int i, c;

	i = 1;
	c = 0;
	while (i < 1024)
	{
		if (i % 3 == 0)
		{
			c = i + c;
		}
		else if (i % 5 == 0)
		{
			c = i + c;
		}
		i++;
	}
	printf("%d", c);
	printf("\n");
	return (0);
}
