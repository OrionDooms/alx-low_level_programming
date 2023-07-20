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

	calc = 0;
	if (argc > 3)
	{
		num1 = atoi(argv[1]);
		operator = (argv[2]);
		num2 = atoi(argv[3]);
		calc = (*get_op_func(s))(num1, num2);
		return (calc);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
