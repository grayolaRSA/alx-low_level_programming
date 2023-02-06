#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 *create_file - creates file
 *@filename: file name
 *@text_content: file content
 *Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t l_written;

	if (!filename || filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		l_written = write(fd, "", 0);
	else
		l_written = write(fd, text_content, _strlen(text_content));

	if (l_written == -1 || (size_t) l_written != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
unsigned long int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
