#include "main.h"

int _isalpha(int c);

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
int _isalpha(int c)
{
	int terminate;

	if ((c >= 65) && (c <= 90))
		terminate = 1;
	else if((c >= 97) && (c <= 122))
		terminate = 1;
	else
		terminate = 0;

	return terminate;
}