#include "main.h"
/**
 * main - a program that copies the content of a file to another file.
 * @ac: argument count
 * @av: array of arguments
 * Return: a value.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, written, readed;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((readed = read(fd_from, buff, 1024)) > 0)
	{
		written = write(fd_to, buff, readed);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
/**
 * close_fd - function that checks if there is error closing
 * @fd: file descriptor
 * If close failed exit(100)
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
