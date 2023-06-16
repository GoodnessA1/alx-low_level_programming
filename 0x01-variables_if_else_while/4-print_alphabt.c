#include <stdio.h>
/**
 * main - Print letter of alphabet minus e and q
 * @ch: char
 *
 * Return: 0
 */

int main(void)
{
	char ch;
	for (ch = 97; ch <= 97 + 25; ch++)
	{
		if (ch == 'e')
			continue;
		if (ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
