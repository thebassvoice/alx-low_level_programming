#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c
 * @c: Parameter to print
 *
 * Return: always 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
