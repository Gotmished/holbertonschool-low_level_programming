#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

/**
 * create_file - creates a file
 * @filename: the text file to be created
 * @text_content: a NULL-terminated string to be written
 * Return: 1 upon success, -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writing;

	/* TRUNC clears a pre-existing file to overwrite */
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filename == NULL || file == -1)
	{
		return (-1);
	}

	/* Replace with empty string */
	if (text_content == NULL)
	{
		text_content = "";
	}

	writing = write(file, text_content, _strlen(text_content));
	if (writing == -1)
	{
		return (-1);
	}

	return (1);
}
