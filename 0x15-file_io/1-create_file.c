#include  "main.h"
/**
 * create_file - create a new file.
 * @filename: is the name of the file to create.
 * @text_content: string to write to the file.
 * Return:1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, x, i;

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
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	x = write(file, text_content, i);
	if (x == -1)
		return (-1);
	close(file);
	return (1);
}
