#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: Takes arguments multiplies.
 * Return: 0 (success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int it, is, sum;

	is = 1;
	it = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	while (is < argc)
	{
		if ((atoi(argv[is]) >= 'a' && atoi(argv[is]) <= 'z')
				|| (atoi(argv[is]) >= 'A' && atoi(argv[is]) <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		is++;
	}
	while (it < argc)
	{
		sum = sum + atoi(argv[it]);
		it++;
	}
		printf("%d\n", sum);
		return (0);
}
