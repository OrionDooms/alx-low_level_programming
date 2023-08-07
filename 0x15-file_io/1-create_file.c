#include "main.h"
/**
 * create_file - create a new file.
 * @filename: is the name of the file to create.
 * @text_content: string to write to the file.
 * Return:1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, w, i = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}
	w = write(fp, text_content, i);
	if (w < 0)
		return (-1);
	close(fp);
	return (1);

}
