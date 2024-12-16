#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/*
 * create_file - function that creates a file
 * @filename: Pointer to the name of the file 2B created
 * @text_content: (Ptr to 1st char of a) NULL term string to write TO the file
 * Nb: If @text_content is NULL, create an empty file
 * Return: 1 on success, -1 if filename is NULL or -1 on failure (file can't..
 * ..be created, file can't be written, write fails, etc...)
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
