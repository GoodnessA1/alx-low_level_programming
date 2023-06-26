#include "main.h"

/**
 * _strlen - Prints length of string
 * @s: parameter of function
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++);
	return (i);
}
