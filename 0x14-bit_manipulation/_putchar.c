#include <unistd.h>
/**
 * _putchar - stdiout
 * @c: print character
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
