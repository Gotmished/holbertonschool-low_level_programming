#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: the text file to be read
 * @letters: the number of letters to be read and then printed
 * Return: 0 if the file cannot be opened or read, if
 * filename is NULL, if write fails, or if expected amount of
 * bytes is not written. Otherwise, the amount of letters specified
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	ssize_t reading, writing;

	/* To open, and what happens if it doesn't work */
	file = open(filename, O_RDONLY);
	if (file == -1 || filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(*buf) * letters);
	if (buf == NULL)
	{
		close(file);
		return (0);
	}

	/* To read, and what happens if it doesn't work */
	reading = read(file, buf, letters);
	if (reading == -1)
	{
		free(buf);
		return (0);
	}

	/* To write, and what happens if it doesn't work */
	writing = write(STDOUT_FILENO, buf, reading);
	if (writing == -1)
	{
		return (0);
	}

	close(file);
	free(buf);
	return (writing);
}
