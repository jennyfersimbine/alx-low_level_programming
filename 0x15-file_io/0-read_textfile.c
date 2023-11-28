#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard outpt
 * @filename: nome of file given
 * @letters:number of letters irt should read and print
 * Return: 0 if erro
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filin, nrLetters, i, lettersPrinted;
	char *fc = malloc((letters + 1) * sizeof(char));

	if (fc == NULL)
		return (0);

	if (filename == NULL)
	{
		free(fc);
		return (0);
	}
	filin = open(filename, O_RDONLY);
	if (filin == -1)
	{
		free(fc);
		return (0);
	}
	nrLetters = read(filin, fc, letters);
	if (nrLetters == -1)
	{
		free(fc);
		close(filin);
		return (0);
	}
	fc[nrLetters] = '\0';

	i = 0;
	lettersPrinted = 0;
	while (fc[i] != '\0')
	{
		lettersPrinted += put_char(fc[i]);
		i++;
	}
	close(filin);
	free(fc);
	return (1);
}
