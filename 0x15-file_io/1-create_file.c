#include  "main.h"
/**
 * create_file - create a new file.
 * @filename: is the name of the file to create.
 * @text_content: string to write to the file.
 * Return:1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, i;

	i = 0;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	w = write(f, text_content, 1);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}
