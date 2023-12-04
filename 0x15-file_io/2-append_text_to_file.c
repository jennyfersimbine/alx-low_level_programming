#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename:  name of the file to create
 * @text_content:  NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	size_t content_len = 0;

	if (filename == NULL)
		return (-1);
	fileD = open(filename, O_WRONLY | O_APPEND);
	if (fileD == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_len = (strlen(text_content)) + 1;
		if ((write(fileD, text_content, content_len)) == -1)
		{
			close(fileD);
			return (-1);
		}
	}
	close(fileD);
	return (1);
}
