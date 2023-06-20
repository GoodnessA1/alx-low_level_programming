#include "main.h"

int print_last_digit(int);
/**
 * print_last_digit - check the code
 * @n: integer
 * @t: integer
 * @a: integer
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int t, a;

	a = n % 10;
	t = a;
	if (a < 0)
		t = -a;
	_putchar(t + '0');

	return t;
}
