#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: Takes arguments multiplies.
 * Return: 0 (success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
