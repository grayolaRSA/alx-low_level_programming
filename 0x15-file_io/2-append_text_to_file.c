#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *append_text_to_file - function
 *@filename: file
 *@text_content: file text
 *Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (write(fd, text_content, strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
