#include <stdio.h>
#ifndef FILENAME
#define FILENAME __FILE__
#endif
/**
 * main - prints the name of a file
 *
 * Return: always 0
 */
int main(void)
{
	puts(FILENAME);

	return (0);
}
