#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name
 * @name: name to be printed
 * @*f: function parameter
 */
void print_name(char *name, void (*f)(char *))
{
	char *c;

	c = name;
	f(c);
}
