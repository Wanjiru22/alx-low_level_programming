#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Read a text file and prints it to POSIX stdout.
* @filename: A point to the name of the file.
* @lettters: The numbe of letters the
* function should read and print.
*
* Return: If the function fails or filename is NULL - 0.
* O/w - the actual number of bytes the fnction can read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O-RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);
}
