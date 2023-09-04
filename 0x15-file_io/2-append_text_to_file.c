#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file to create.
 * @text_content: string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, i;

	i = 0;
	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	w = write(f, text_content, i);
	if (w < 0)
		return (-1);
	close(f);
	return (1);
}
