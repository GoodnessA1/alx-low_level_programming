#include "main.h"

int print_sign(int n);
/**
 * print_sign - prints the sign of a number
 * @n: integer parameter
 * @terminate: return value
 * Return: Always 0.
 */
int print_sign(int n)
{
	int terminate;

	if (n < 0)
	{
		_putchar('-');
		terminate = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		terminate = 0;
	}
	else if (n > 0)
	{
		_putchar('+');
		terminate = 1;
	}
	return terminate;
}
