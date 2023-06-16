#include <stdio.h>
/**
 * main - Prints out letter of alphabet with putchar
 * @ch: variable
 *
 * Return: always 0 (Successful)
 */
int main(void)
{
	char ch, ch1;

	for (ch = 48; ch <= 48 + 9; ch++)
		putchar(ch);

	for (ch1 = 97; ch1 <= 97 + 5; ch1++)
		putchar(ch1);

	putchar('\n');
	return (0);
}
