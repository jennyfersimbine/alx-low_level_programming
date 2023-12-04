#include "main.h"

/**
 * create_file - function that creates a file
 * @filename:  name of the file to create
 * @text_content:  NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fileD;
	size_t content_len = 0;

	if (filename == NULL)
		return (-1);
	fileD = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fileD == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_len = (strlen(text_content));
		if ((write(fileD, text_content, content_len)) == -1)
		{
			close(fileD);
			return (-1);
		}
	}
	close(fileD);
	return (1);
}
