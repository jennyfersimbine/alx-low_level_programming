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
char *fc = malloc( letters * sizeof(char));

filin = open(filename, O_RDONLY);
if (filin == -1)
	return (0);

if (filename == NULL)
	return (0);

nrLetters = read(filin, fc, letters);
if (nrLetters == -1)
	return (0);

fc[letters] = '\0';

i = 0;
while (fc[i] != '\0')
{
	lettersPrinted += _putchar(fc[i]);
    i++;
}
  fclose(filin);
  return (1);
}
