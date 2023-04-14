#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
