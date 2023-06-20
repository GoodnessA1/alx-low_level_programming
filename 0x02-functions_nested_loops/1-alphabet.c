#include "main.h"

void print_alphabet(void);
/**
 * main - check the code
 * @ch: character to be printed
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);

	_putchar('\n');
}
