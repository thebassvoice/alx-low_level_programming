#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int this;

	for (this = 0; this < argc; this++)
	{
		printf("%s\n", argv[this]);
	}

	return (0);
}
