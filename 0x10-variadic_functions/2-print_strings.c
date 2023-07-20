#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: parameter
 * @n: Parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *a;
	int i = 0;
	va_list arglist;

	va_start(arglist, n);
	while (i < n)
	{
		a = va_arg(arglist, char *);
		printf("%s", a);
		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	_putchar('\n');
}
