#include "holberton.h"
/**
* read_textfile - Reads a text and prints it to the POSIX standard output
* @filename: File to be read
* @letters: Number of letters to read and print
* Return: 0 if failure, NULL
*       : Number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_cnt;
	int write_cnt;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	read_cnt = read(fd, buf, letters);
	if (read_cnt < 0)
		return (0);
	write_cnt = write(STDOUT_FILENO, buf, read_cnt);
	if (write_cnt < 0)
		return (0);
	free(buf);
	return (read_cnt);
}
