#include "main.h"

int _islower(int c);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
int _islower(int c)
{
	int terminate;

	if (( c >= 97) && (c <= 122))
		terminate = 1;
	else if (( c >= 65) && (c <= 90))
		terminate = 0;

	return terminate;
}
