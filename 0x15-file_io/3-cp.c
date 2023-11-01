#include "main.h"
void close_file(int f);
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: Takes arguments multiplies.
 * Return: 0 (success).
 */
int main(int argc, char **argv)
{
	int file_from, file_to;/*, cls1, cls2;*/
	ssize_t cp = 1024, file2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (cp == 1024)
	{
		cp = read(file_from, buf, 1024);
		if (cp == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		file2 = write(file_to, buf, cp);
		if (file2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file(file_from);
	close_file(file_to);
	return (0);
}

void close_file(int f)
{
	int cls;

	cls = close(f);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
