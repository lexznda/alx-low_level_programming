#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: the content to be written on the file
 * Return: different things
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, text_num, write_des;

	if (!filename)
		return (-1);

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_des == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (text_num = 0; text_content[text_num]; text_num++)
	{
	}

	write_des = write(file_des, text_content, text_num);

	if (write_des == -1)
		return (-1);

	close(file_des);

	return (1);
}
