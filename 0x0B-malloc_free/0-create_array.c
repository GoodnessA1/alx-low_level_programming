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

	if (size == 0)
	{
		a = 0;
		while (f[a] != '\0')
		{
			_putchar(f[a]);
			a++;
		}
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s != NULL)
	{
		while (i < size)
		{
			s[i] = 0xc;
			i++;
		}
	}
	return (s);
}
