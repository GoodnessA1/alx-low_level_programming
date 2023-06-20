#include "main.h"

void print_alphabet_x10(void);

/**
 * main - check the code
 * @i: integer parameter
 * @ch: char parameter
 */
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
