#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file which we want to open.
 * @letters: letters is the number of letters it should read and print.
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, a, w;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	a = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, a);
	close(fp);
	free(buf);
	return (w);
}
