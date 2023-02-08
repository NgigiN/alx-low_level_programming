#include "main.h"


/**
 * read_textfile- reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the file location
 * @letters: number of letters it should read and
 * print
 * Return: number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or prints the expected amount of bytes 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_r, num_w, fd;
	char *buff;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		free(buff);

		return (0);
	}
	num_r = read(fd, buff, letters);
	if (num_r == -1)
	{
		close(fd);
	free(buff);
	return (0);
	}
	num_w = write(STDOUT_FILENO, buff, num_r);
	if (num_w < 0)
		return (0);
	close(fd);
	free(buff);
	return (num_w);
}
