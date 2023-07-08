#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of argument.
 * @argv: Takes  a argument.
 * Return: 0 (success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n, c = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
		printf("0\n");
	else
	{
		while (n > 0)
		{
			if (n >= 100)
				n = n - 100, c = c + 4;
			else if (n >= 10)
				n = n - 10, c = c + 1;
			else if (n >= 5)
				n = n - 5, c = c + 1;
			else if (n >= 2)
				n = n - 2, c = c + 1;
			else
				n = n - 1, c = c + 1;
		}
		printf("%d\n", c);
	}
	return (0);
}
