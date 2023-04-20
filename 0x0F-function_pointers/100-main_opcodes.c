#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int by, j;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (j = 0; j < by; j++)
	{
		if (j == by - 1)
		{
			printf("%02hhx\n", array[j]);
			break;
		}
		printf("%02hhx ", array[j]);
	}
	return (0);
}
