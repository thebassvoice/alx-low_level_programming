#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Main
 * @separator: Arguments
 * @n: argument
 * @...: Argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *t;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		t = va_arg(list, char *);
		if (t == NULL)
			printf("(nil)");
		else
			printf("%s", t);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
