#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * file_copy - copies the content of one file to another
 * @file_from: the file to be copied from
 * @file_to: the file to receive the copy
 * @ff: pointer to 'file_from'
 * @ft: pointer to 'file_to'
 * Return: An error message
 */

int file_copy(int ff, int ft, char *file_from, char *file_to)
{
	int reading, writing;
	char buf[1024];

	reading = read(ff, buf, 1024);
	if (reading == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	writing = write(ft, buf, reading);
	if (writing == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	if (close(ff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff);
		exit(100);
	}

	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ft %i\n", ft);
		exit(100);
	}
	return (0);
}

/**
 * main - copies content of one file to another
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments
 * Return: Always zero, denoting success
 */

int main(int argc, char *argv[])
{
	int ff, ft;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	ff = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(ff);
		exit(98);
	}

	/* TRUNC clears a pre-existing file to overwrite */
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (argv[2] == NULL || ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(ft);
		exit(99);
	}
	close(ff);
	close(ft);
	return (file_copy(ff, ft, argv[1], argv[2]));
}
