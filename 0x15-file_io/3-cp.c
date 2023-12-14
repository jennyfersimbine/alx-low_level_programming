#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: nr of args
 * @argv: arguments
 * Return: 0 if success, 1 is error
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to, *fc;
	int fileD_from, fileD_to;
	ssize_t readBytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fileD_from = open(file_from, O_RDONLY);
	if (fileD_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileD_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fileD_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fc = (char *) calloc((1024), sizeof(char));
	if (fc == NULL)
		exit(1);
	while ((readBytes = read(fileD_from, fc, 1024)) > 0)
	{
	if ((write(fileD_to, fc, readBytes)) == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	}
	}
	if (readBytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((close(fileD_from)) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileD_from);
	}
	if ((close(fileD_to)) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileD_to);
	}
	return (0);
}
