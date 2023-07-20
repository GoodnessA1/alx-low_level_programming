#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a, i;
	va_list arglist;

	i = 0;
	va_start(arglist, n);
	while (i < n)
	{
		a = va_arg(arglist, int);
		printf("%i", a);
		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	_putchar('\n');
}
