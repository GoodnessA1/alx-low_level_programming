#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: parameter of function
 */

void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i]; i++)
	;
	if (i % 2 == 0)
	{
		a = i / 2;
		for (; str[a] != '\0'; a++)
			_putchar(str[a]);
	}
	else if (i % 2 != 0)
	{
		a = (i - 1) / 2;
		for (; str[a] != '\0'; a++)
			_putchar(str[a]);
	}
	_putchar('\n');
}
