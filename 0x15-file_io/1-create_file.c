#include "main.h"
/**
 * create_file - a function that creates a file.
 *
 * @filename: name of file to create.
 * @text_content:text to be written
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 *
 * Return:returns 1 on success.
 * -1 on failure
 * if file name is NULL return 0,
 * if write fails or does not write the expected amount of bytes,return 0
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int fd, written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fd, text_content, strlen(text_content));
		if (written == -1)
			return (-1);
		if (written == 0)
			return (-1);
	}
	close(fd);

	return (1);
}
