#include "main.h"

void print_numbers(void);
/**
 * print_numbers - Iterates through 1 to 10
 * 
 * Return 0
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
