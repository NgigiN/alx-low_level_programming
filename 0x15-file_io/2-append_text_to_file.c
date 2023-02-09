#include "main.h"

/**
 * append_text_to_file - appends text to the end of
 * a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add
 * at the end of the file
 * Return: 1 on success or -1 on failure
 * Do not create the file if it does not exist
 * If file name is NULL return -1
 * if text-content si NULL do not add anything to the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, test = 0, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		test = write(fd, text_content, len);
		if (test < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
