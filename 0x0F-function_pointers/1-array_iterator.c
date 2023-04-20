#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Main funtion
 * @array: argument pointer
 * @size: argument
 * @action: argument pointer
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int execute;

	if (array == NULL || action == NULL)
		return;

	for (execute = 0; execute < size; execute++)
	{
		action(array[execute]);
	}
}
