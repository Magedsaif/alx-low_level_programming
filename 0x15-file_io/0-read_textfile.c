#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: name of file to be read.
 * @letters: letters is the number of letters it should read and print
 *
 * Return:returns the actual number of letters it could read and print
 * if file can not be opened or read return 0,
 * if file name is NULL return 0,
 * if write fails or does not write the expected amount of bytes,return 0
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, written;
	char *txt;

	txt = malloc(sizeof(char) * letters);/*allocating memory for txt*/
	if (txt == NULL)
		return (0);

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);/*opening file in read only mode*/
	if (fd == -1)
		return (0);


	letters = read(fd, txt, letters);/*read file*/

	written = write(STDOUT_FILENO, txt, letters);/*write to STDOUT*/

	if (written == -1)
		return (0);

	close(fd);
	free(txt);
	return (letters);
}
