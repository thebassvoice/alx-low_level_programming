#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Function
 * @format: argument
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *r, *p = "";

	va_list list;
		va_start(list, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", p, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(list, double));
					break;
				case 's':
					r = va_arg(list, char *);
					if (!r)
						r = "(nil)";
					printf("%s%s", p, r);
					break;
				default:
					j++;
					continue;
			}
			p = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(list);
}
