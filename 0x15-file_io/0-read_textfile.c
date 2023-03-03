#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: the file name
 * @letters: size read
 * Return: the number of letter read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t write_des, read_des;
	char *buf;

	if (!filename)
		return (0);

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	read_des = read(file_des, buf, letters);
	write_des = write(STDOUT_FILENO, buf, read_des);

	close(file_des);
	free(buf);
	return (write_des);
}
