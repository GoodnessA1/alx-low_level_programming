#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Create an Array
 * @size: size of the array
 * @c: Array index character
 *
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	char *f = "failed to allocate memory";
	int a;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (s != NULL)
	{
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	}
	else
	{
		for (a = 0; f[a] != '\0'; a++)
			_putchar(f[a]);
		_putchar('\n');
	}
	return (s[i]);
}
