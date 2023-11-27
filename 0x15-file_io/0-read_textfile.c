#include "main.h"

/**
 * read_textfile - scans a text file and writes the letters
 * @filename: name of file.
 * @letters: numbers of letters written.
 *
 * Return: numbers of letters written. If fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdd;
	ssize_t nrdd, nwrr;
	char *buff;

	if (!filename)
		return (0);

	fdd = open(filename, O_RDONLY);

	if (fdd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrdd = read(fdd, buff, letters);
	nwrr = write(STDOUT_FILENO, buff, nrdd);

	close(fdd);

	free(buff);

	return (nwrr);
}
