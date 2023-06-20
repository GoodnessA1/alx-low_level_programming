#include "main.h"

int print_last_digit(int);
/**
 * print_last_digit - check the code
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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
