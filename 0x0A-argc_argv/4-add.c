#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - main function
 * @str: argument
 *
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int check;

	check = 0;
	while (check < strlen(str))
	{
		if (!isdigit(str[check]))
		{
			return (0);
		}
		check++;
	}
	return (1);
}

/**
 * main - function 2
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	int count = 1;
	int string;
	int total = 0;

	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			string = atoi(argv[count]);
			total += string;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", total);
	return (0);
}
