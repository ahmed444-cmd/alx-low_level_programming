#include "main.h"
#include <stdio.h>

/**
 * error_file - checks oppening of file.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argumv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argumv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argumv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argumv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argumn: numb of args.
 * @argumv: args vector.
 * Return: Always 0.
 */
int main(int argumn, char *argumv[])
{
	int file_from, file_to, err_close;
	ssize_t nch, nwr;
	char buff[1024];

	if (argumn != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argumv[1], O_RDONLY);
	file_to = open(argumv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argumv);

	nch = 1024;
	while (nch == 1024)
	{
		nch = read(file_from, buff, 1024);
		if (nch == -1)
			error_file(-1, 0, argumv);
		nwr = write(file_to, buff, nch);
		if (nwr == -1)
			error_file(0, -1, argumv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
