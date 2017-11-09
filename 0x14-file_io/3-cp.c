#include "holberton.h"
void check_close(int csfd, int cdfd);
void error(int n, char *argv, char *buf);
/**
* main - Copies the content of a file to another file
* @ac: Argument count
* @argv: Pointer to string array of arguments
* Return:  97, Incorrect number of arguments
*	 98, Can't read source file
*	 99, Can't write to destination file
*	 100, Cannot close fd
*	 -1  Cannot malloc buffer
*	 1 Success
*/
int main(int ac, char *argv[])
{
	int sfd, dfd, write_cnt, read_cnt, csfd, cdfd;
	char *buf;

	read_cnt = 1024;
	buf = malloc(1024);
	if (buf == NULL)
		return (-1);
	if (argv == NULL)
		return (-1);
	if (ac != 3)
		error(3, argv[0], buf);
	sfd = open(argv[1], O_RDONLY);/* open source file */
	if (sfd == -1)
		error(98, argv[1], buf);
	dfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);/* open dest file */
						/*if doesn't already exist, create*/
						/* if alread exists, truncate it */
	if (dfd == -1)
		error(99, argv[2], buf);
	while (read_cnt == 1024)
	{
		read_cnt = read(sfd, buf, 1024);/*read source file to buffer */
		if (read_cnt == -1)
			error(98, argv[1], buf);
		write_cnt = write(dfd, buf, read_cnt);/*write to dest from buffer */
		if (write_cnt == -1)
			error(99, argv[2], buf);
	}
	free(buf);
	csfd = close(sfd);
	cdfd = close(dfd);
	check_close(csfd, cdfd);
	return (0);
}
/**
* check_close - checks if close succeeded or failed
* @csfd: file descriptor for source file
* @cdfd: file descriptor for dest file
*/
void check_close(int csfd, int cdfd)
{
	if (csfd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", csfd);
		exit(100);
	}
	if (cdfd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cdfd);
		exit(100);
	}
}
/**
* error - outputs message for each error
* @n: error number
* @argv: pointer to filename
* @buf: buffere pointer
*/
void error(int n, char *argv, char *buf)
{
	free(buf);
	if (n == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
	else if (n == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
