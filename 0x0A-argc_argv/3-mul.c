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
	int sum, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
	}
	return (0);
}
