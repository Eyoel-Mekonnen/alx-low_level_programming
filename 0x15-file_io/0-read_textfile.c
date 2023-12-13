#include "main.h"
/**
 * read_textfile - reads text file and prints to POSIX
 * @filename: the file address passed
 * @letters: number of letters
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_f, read_f, write_f;
	char *buffer;

	if (filename == NULL)
		return (0);
	open_f = open(filename, O_RDONLY);
	if (open_f == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_f = read(open_f, buffer, letters);
	write_f = write(1, buffer, read_f);
	close(open_f);
	free(buffer);
	return (write_f);
}
