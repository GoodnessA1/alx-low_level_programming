#include "variadic_functions.h"
/**
 * sum_them_all - sums all argument passed together
 * @n: inyeger parameter
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list arglist;

	i = 0;
	sum = 0;
	va_start(arglist, n);
	while (i < n)
	{
		sum += va_arg(arglist, int);
		i++;
	}

	return (sum);
}
