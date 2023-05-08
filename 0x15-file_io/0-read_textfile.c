#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *puff;
	ssize_t rdo;
	ssize_t w;
	ssize_t s;

	rdo = open(filename, O_RDONLY);
	if (rdo == -1)
		return (0);
	puff = malloc(sizeof(char) * letters);
	s = read(rdo, puff, letters);
	w = write(STDOUT_FILENO, puff, s);

	free(puff);
	close(rdo);
	return (w);
}
