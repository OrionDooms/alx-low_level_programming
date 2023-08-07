#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *file_from, *file_to;
	char *buf, filename[100];
	size_t fp, a, w;

	buf = malloc(sizeof(char) * file_from);

	file_from = open(filename, "O_RDONLY");
	if (file_from == NULL)
		return (-1);
	file_to = open(filename, "O_WRONLY");
        if (file_to == NULL)
                return (-1);
	a = read(file_from, buf, 10);
	w = write(STDOUT_FILENO, buf, a);
	close(fp);
	free(buf);
	return (w);
}
