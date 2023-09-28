#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


int main(int argc, char *argv[])
{
	int fdto, fdfro, err_close;
	char buffer[1024];
	ssize_t nchars, w;
	nchars = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n","Usage: cp file_from file_to");
		exit(97);
	}

	fdfro = open(argv[1], O_RDONLY);
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);/*APPEND*/

	error_file(fdfro, fdto, argv);

	while (nchars == 1024)
	{
		nchars = read(fdfro, buffer, 1024);

		if (nchars == -1)
		{
			error_file(-1, 0 ,argv);
		}
		w = write(fdto, buffer, nchars);

		if (w == -1)
		{
			error_file(0, -1, argv);
		}
	}
	err_close = close(fdfro);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfro);
		exit(100);
	}

	err_close = close(fdto);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	return (0);
}
