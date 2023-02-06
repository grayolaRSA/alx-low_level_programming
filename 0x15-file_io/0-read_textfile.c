#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 *read_textfile - reads text files and prints to stdout
 *@filename: text file
 *@letters: length of string
 *Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	int fd;
	ssize_t l_read, l_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	c = malloc(letters);
	if (!c)
		return (0);

	l_read = read(fd, c, letters);
	if (l_read == -1)
	{
		free(c);
		close(fd);
		return (0);
	}

	l_written = write(STDOUT_FILENO, c, l_read);
		if (l_written == -1 || l_written != l_read)
		{
			free(c);
			close(fd);
			return (0);
		}
		free(c);
		close(fd);
		return (l_written);
}
