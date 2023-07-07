#include <stdio.h>
/**
 * main - program that prints its name.
 * @argc:is the number of arguments.
 * @argv: argv[0] is the name of the program being executed.
 * Return: 0 (success).
 */
int  main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
