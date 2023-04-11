#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main funtion
 * @str: argument
 * Return: always 0
 */

char *_strdup(char *str)		
{
	char *arr;
	int iin, j = 0;

	if (str == NULL)
		return (NULL);
	iin = 0;
	while (str[iin] != '\0')
		iin++;
	arr = malloc(sizeof(char) * (iin + 1));
	if (arr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		arr[j] = str[j];
	return (arr);
}

