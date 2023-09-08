#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copies the content of a file to another file.
 * @ac: number of arguments.
 * @av: Takes arguments multiplies.
 * Return: 0 (success).
 */
int main(int ac, char **av)
{
	int file_from, file_to, cp, cls1, cls2;
	char *buffer = malloc(sizeof(char) * (1024));

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1 || av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	cp = read(file_from, buffer, 1024);
	if (cp == -1 || file_to == -1 || av[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	write(file_to, buffer, cp);
	cls1 = close(file_from);
	cls2 = close(file_to);
	if (cls1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (cls2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	free(buffer);
	return (0);
}
