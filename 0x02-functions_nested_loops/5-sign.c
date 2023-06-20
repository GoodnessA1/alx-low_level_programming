#include "main.h"

int print_sign(int n);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
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
