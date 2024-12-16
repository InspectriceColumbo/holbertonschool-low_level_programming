#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/*
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Pointer to the name of the file
 * @text_content: Ptr to a NULLterminated string to add at the end of the file
 * Nb: Do not create the file if it does not exist
 * Return: -1 on failure
 *            if @filename is NULL
 *            if file does not exist.
 *            if you do not have the required permissions to write the file
 * Return: 1 on success or if @text_content is NULL but the file exists.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
