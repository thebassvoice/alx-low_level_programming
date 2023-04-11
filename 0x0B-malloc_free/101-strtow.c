#include <stdlib.h>
#include "main.h"
/**
 * count_word - main function
 * @s: argumrnt
 * Return: Called variable
 */
int count_word(char *s)
{
	int string, i, j;

	string = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			string = 0;
		else if (string == 0)
		{
			string = 1;
			j++;
		}
	}
	return (j);
}
/**
 * strtow - Semi main function
 * @str: string to split argument
 * Return: NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int in, e = 0, len = 0, words, c = 0, s, en;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (in = 0; in <= len; in++)
	{
		if (str[in] == ' ' || str[in] == '\0')
		{
			if (c)
			{
				end = in;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (s < en)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[e] = tmp - c;
				e++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = in;
	}
	matrix[e] = NULL;
	return (matrix);
}
