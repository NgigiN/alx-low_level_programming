#include "main.h"

/**
 * create_file - creates a file
 * @filename: is the name of the file to be created
 * @text_content: is NULL teminated string to write to
 * the file
 * Return: 1 on success or -1 on failure
 * if the file exists don't change the permissions truncate it
 * filename is NULL return -1
 * text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, status, len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < o)
		return (-1);

	while (text_content[len])
	{
		len++;
	}

	status = write(fd, text_content, len);
	if (status < 0)
	{
	close(fd);
	return (-1);
	}
	close(fd);
	return (1);
}
