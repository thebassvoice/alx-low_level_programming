#include <stdio.h>
#include <stdlib.h>
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
	int digit, i, sum;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	digit = atoi(argv[1]);
	sum = 0;
	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && digit >= 0; i++)
	{
		while (digit >= coins[i])
		{
			sum++;
			digit -= coins[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}
