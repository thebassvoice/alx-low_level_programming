#include <stdio.h>
#include "main.h"

/**
 * _atoi - main funtion
 * @s: argument
 *
 * Return: string int
 */
int _atoi(char *s)
{
	int in = 0, j = 0, e = 0, length = 0, big = 0, num = 0;

	while (s[length] != '\0')
		length++;
	while (in < length && big == 0)
	{
		if (s[in] == '-')
			++j;
		if (s[in] >= '0' && s[in] <= '9')
		{
			num = s[in] - '0';
			if (j % 2)
				num = -num;
			e = e * 10 + num;
			big = 1;
			if (s[in + 1] < '0' || s[in + 1] > '9')
				break;
			big = 0;
		}
		in++;
	}
	if (big == 0)
		return (0);
	return (e);
}

/**
 * main - second main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 and 1
 */
int main(int argc, char *argv[])
{
	int final, first, sec;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	first = _atoi(argv[1]);
	sec = _atoi(argv[2]);
	final = first * sec;
	printf("%d\n", final);
	return (0);
}
