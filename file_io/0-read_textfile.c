#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/*
 *read_textfile: reads a text file and prints it to POSIX standard output
 * @filename: Pointer to the name of the text file
 * @letters: the number of letters it should read and print, type size_t
 * Return: the actual number of letters it could read and print
 * Or return 0 if: file cant be opened or read/filename is NULL/write fails..
 * ..or doesn't write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t rd;
	ssize_t wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
