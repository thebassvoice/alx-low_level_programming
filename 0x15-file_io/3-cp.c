#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1 on
 */
int main(int argc, char *argv[])
{
	FILE *destination, *source;
	char buf[BUFSIZE];
	size_t readB, writtenB;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <source> <destination\n", argv[0]);
		exit(1);
	}
	source = fopen(argv[1], "readb");
	if (source == NULL)
	{
		fprintf(stderr, "Error: Cannot open file '%s'\n", argv[1]);
		exit(2);
	}
	destination = fopen(argv[2], "wwrittenb");
	if (destination == NULL)
	{
		exit(2);
	}
	while ((readB = fread(buf, 1, BUFSIZE, source)))
	{
		writtenB = fwrite(buf, 1, readB, destination);
		if (writtenB != readB)
		{
			fprintf(stderr, "Error: Cannot write to file '%s'\n", argv[2]);
			exit(2);
		}
	}
	fclose(source);
	fclose(destination);
	return (0);
}
