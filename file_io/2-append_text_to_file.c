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
 * append_text_to_file - appends text to the end of a file
 * @filename: the file at the end of which text is to be appended
 * @text_content: a NULL-terminated string to be added at the end of the file
 * Return: 1 upon success, -1 upon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writing;

	file = open(filename, O_WRONLY | O_APPEND);
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

	close(file);
	return (1);
}
