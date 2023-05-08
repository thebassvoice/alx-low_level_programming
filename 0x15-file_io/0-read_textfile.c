#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile- main function
 * @filename: tpointer
 * @letters: parameter
 * Return: if filename is NULL return 0 otherwise return
 * number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ltrs, emel, j;
	char *count;

	ltrs = open(filename, O_RDONLY);
	if (ltrs == -1)
		return (0);
	count = malloc(sizeof(char) * letters);
	j = read(ltrs, count, letters);
	emel = write(STDOUT_FILENO, count, j);

	free(count);
	close(ltrs);
	return (emel);
}
