#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d", argc);
	putc('\n', stdout);

	return (0);
}
