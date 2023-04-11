#include "main.h"
#include <stdlib.h>
/**
 * create_array - main function creates an array
 * @size: size of parrameter
 * @c: parameter argument
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *character;
	unsigned int i;

	character = malloc(sizeof(char) * size);
	if (size == 0 || character == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		character[i] = c;
	return (character);
}
