#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard outpt
 * @filename: nome of file given
 * @letters:number of letters irt should read and print
 * Return: 0 if erro
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filin;
	ssize_t nrLetters, letterPrinted = 0, totalPrinted = 0;
	char *fc = (char *) calloc((letters + 1), sizeof(char));
	/* using calloc to initialize the buffer to 0s,
	 * to ensure all values are initially set to zero
	 */
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

	while (nrLetters > 0)
	{
		letterPrinted = write(STDOUT_FILENO, fc + totalPrinted, nrLetters);
		if (letterPrinted == -1)
		{
			free(fc);
			close(filin);
			return (0);
		}
		totalPrinted += letterPrinted;
		nrLetters -= letterPrinted;
	}
	close(filin);
	free(fc);
	return (letterPrinted);
}
