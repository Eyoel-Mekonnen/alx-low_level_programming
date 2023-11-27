#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the file name that is passed
 * @text_content: the string
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int open_f, write_f;
	int counter = 0;

	if (filename == NULL)
		return (-1);
	open_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (open_f == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[counter] != '\0')
		counter++;
	write_f = write(open_f, text_content, counter);
	if (write_f == -1)
		return (-1);
	close(open_f);
	return (1);
}
