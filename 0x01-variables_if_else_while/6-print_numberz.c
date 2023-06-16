#include <stdio.h>
/**
 * main - print number in string format
 * @ch: char
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 48; ch <= 48 + 9; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
