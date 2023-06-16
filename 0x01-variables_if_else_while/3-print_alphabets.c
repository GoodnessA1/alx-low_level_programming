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

	for (ch = 97; ch <= 97 + 25; ch++)
		putchar(ch);

	for (ch1 = 65; ch1 <= 65 + 25; ch1++)
		putchar(ch1);

	putchar('\n');
	return (0);
}
