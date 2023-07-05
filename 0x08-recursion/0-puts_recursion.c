#include "main.h"

/**
 * _puts_recursion - Prints a string with recursion
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s == "")
		_putchar('\n');
	_putchar(s[i]);
	if (s[i+1] != '\0')
		_puts_recursion(s+1);
	else
		_putchar('\n');
}
