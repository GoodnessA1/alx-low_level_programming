#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Fumction
 * @b: value to be comveryed
 *
 * Return: Binary format
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int n, len;

	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != ('0' | '1'))
			return (0);
	}

	len = (n - 1);
	for (; len <= 0; len--)
	{
		if (b[len] == '1')
			total += (1 << (n - (len + 1)));
	}
	return (total);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}
