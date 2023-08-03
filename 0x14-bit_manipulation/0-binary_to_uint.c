#include "main.h"
#include <stdio.h>

int _pow(int base, int exp);
int _atoi(const char *s);	
/**
 * binary_to_uint - Comverts bin string to dec
 * @b: binary string
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int uint = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int n;
	int num = _atoi(b);

	for(n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	if (!b)
		return (0);

	while (num != 0)
	{
		j = num % 10;
		num /= 10;
		i = j * (_pow(2, k));
		k++;
		uint = uint + i;
	}
	return (uint);
}

/**
 * _pow - Takes number to power
 * @base: Base to which power is taken
 * @exp: Ppwer to which base is raised
 *
 * Return: powered number
 */
int _pow(int base, int exp)
{
	int result = 1;

	while (exp != 0)
	{
		result = result * base;
		--exp;
	}

	return result;
}


/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(const char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
