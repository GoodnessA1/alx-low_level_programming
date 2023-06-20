#include "main.h"

void print_alphabet_x10(void);

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
