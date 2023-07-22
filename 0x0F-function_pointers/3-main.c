#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple calcultion.
 * @argc: number of arguments.
 * @argv: arguments being executed.
 * Return: calcultion of the operations
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;
	char *operator;

	if (argc > 3)
	{
		num1 = atoi(argv[1]);
		operator = (argv[2]);
		num2 = atoi(argv[3]);
		if (*operator == '+' || *operator == '-' ||
				*operator == '*' || *operator == '/' ||
				*operator == '%')
		{
			if ((*operator == '/' && num2 == 0) ||
					(*operator == '%' && num2 == 0))
			{
				printf("Error\n");
				exit(100);
			}
			else
			calc = get_op_func(operator)(num1, num2);
			printf("%d\n", calc);
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
