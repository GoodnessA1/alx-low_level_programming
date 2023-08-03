#include "main.h"
/**
 * print_binary - Prints the bimary representation of a number
 * @n: Parameter
 */
void print_binary(unsigned long int n)
{
	unsigned long int j;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (j = n, i = 0; (j = j >> 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
