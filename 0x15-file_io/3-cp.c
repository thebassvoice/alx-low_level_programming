#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void close_file(int shut);
char *make_buffer(char *create);
/**
 * make_buffer - buff function
 * @create: parameter
 *
 * Return: Pointer to the created buffer
 */
char *make_buffer(char *create)
{
	char *new;

	new = malloc(sizeof(char) * 1024);

	if (new == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", create);
		exit(99);
	}
	return (new);
}
/**
 * close_file - function
 * @shut: parameter
 */
void close_file(int shut)
{
	int em = close(shut);

	if (em == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", shut);
		exit(100);
	}
}
/**
 * main - Main function of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int start, end, readf, writef;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	start = open(argv[1], O_RDONLY);
	readf = read(start, buf, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		writef = write(end, buf, readf);
		if (end == -1 || writef == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		readf = read(start, buf, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);
	} while (readf > 0);
	free(buf);
	close_file(start);
	close_file(end);
	return (0);
}
