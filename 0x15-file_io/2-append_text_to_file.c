#include "main.h"
/**
 * append_text_to_file - appends a text at the end of file
 * @filename: the file address passed
 * @text_content: pointer to a string to be appended
 *
 * Return: 1 on Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_f;
	int write_f;
	int counter = 0;

	if (filename == NULL)
		return (-1);
	open_f = open(filename, O_WRONLY | O_APPEND);
	if (open_f == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[counter] != '\0')
			counter++;
		write_f = write(open_f, text_content, counter);
		if (write_f == -1)
			return (-1);
	}
	close(open_f);
	return (1);
}
