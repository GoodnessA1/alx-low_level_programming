#include "main.h"
#include <stdio.h>

/**
 * main - Prints all argument
 * @argc: args count
 * @argv: args variable
 *
 * Return: 0
 */
int main(int argc, char ** argv)
{
	int i;

	for (i = 0; i < argc; i++)
		puts(argv[i]);

	return (0);
}
