#include "main.h"

void print_alphabet(void);
/**
 * main - check the code
 *
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);

	_putchar('\n');
}
