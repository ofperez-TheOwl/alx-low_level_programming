#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read a text file and prints it to stdout
 * @filename: pointer to constant char; name of the file to read
 * @letters: size_t; number of letters to read and print
 *
 * Return: ssize_t; actual number of letter read and printed
 * 0 if file was not open or read or if filename is NULL
 * or write fails
 * TheOwl
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j;
	int fd;
	char *buffer;

	if (filename == NULL) /* invalid input */
		return (0);

	fd = open(filename, O_RDONLY); /* open the file and check */
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char)); /* malloc for buffer */
	if (buffer == NULL)
		return (0);

	i = read(fd, buffer, letters); /* read first letters of file and check */
	if (i == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[letters] = '\0';
	j = write(STDOUT_FILENO, buffer, letters); /* write to stdout and check */
	if (j == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (i);
}
