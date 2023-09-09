#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/*
 * ssize_t read_textfile - Program that reads a
 * text file and prints it to the POSIX standard output.
 * @filename: File name to read.
 * @letters: size of letters on the given file.
 * Return: 0 if Null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}

	fdr = read(fdo, temp, letters);
	temp[letters] = '\0';
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}

	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
