#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
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
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, len;

	if (text_content = NULL)
		return (-1);
	len = strlen(text_content);
	

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fd, text_content, len);
		if (written == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
