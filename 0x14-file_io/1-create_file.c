#include "holberton.h"
/**
* create_file - Creates a file
* @filename: name of file to be created
* @text_content: String to write to the file
* Return: Succes 1, failur or NULL -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	int write_ret;
	char *temp;

	i = 0;
	temp = text_content;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = creat(filename, 00600);
		if (fd < 0)
		{		
			close (fd);
			return (-1);
		}
	}
	while (*temp != '\0')
	{
		temp++;
		i++;
	}
	fd = creat(filename, 00600);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	write_ret = write(fd, text_content, i);
	if (write_ret < 0)
	{
		close (fd);
		return (-1);
	}
	close(fd);
	return (1);
}

