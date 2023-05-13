#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main -  a program that displays the
 *  information contained in the ELF header at the start of an ELF file.
 * @ac: arguments count
 * @av: arguments vactor
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd;

	if (ac != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}
	return (0);
}
