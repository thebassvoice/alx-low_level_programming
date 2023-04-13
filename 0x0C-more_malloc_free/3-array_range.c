#include <stdlib.h>
#include "main.h"

/**
 * *array_range - main funtion
 * @min: min argument
 * @max: max argument
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pointer;
	int j, e;

	if (min > max)
		return (NULL);
	e = max - min + 1;
	pointer = malloc(sizeof(int) * e);
	if (pointer == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		pointer[j] = min++;
	return (pointer);
}
