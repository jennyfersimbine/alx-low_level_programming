#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: nr of args
 * @argv: arguments
 * Return: 0 if success, 1 is error
 */

int main(int argc, char **argv)
{
	char *file_from;
	char *file_to;
	char *fc;
	int fileD_from, fileD_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	} else
	{
	file_from = argv[1];
	file_to = argv[2];

	if (file_from == NULL)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	}
	if (file_to == NULL)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s", argv[1]);
	}
	fileD_from = open(file_from, O_RDONLY);
	if (fileD_from == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	}

	fileD_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fileD_to == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
	}

	fc = (char *) calloc((1024), sizeof(char));
	/*
	 * using calloc to initialize the buffer to 0s,
	 * to ensure all values are initially set to zero
	 *must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer.
	 */
	if (fc == NULL)
		return (0);

	if ((read(fileD_from, fc, 1024)) == -1)
	{
		free(fc);
		close(fileD_from);
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	}

	if ((write(fileD_to, fc, 1024)) == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
	}

	if ((close(fileD_from)) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fileD_from);
	}

	if ((close(fileD_to)) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fileD_to);
	}
	}
	return (0);
}
