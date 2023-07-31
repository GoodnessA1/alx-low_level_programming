#include "main.h"
#include <stdio.h>

int _abs(int n);
/**
 * _abs - prints the absolute value
 * @n: integer
 * @t: integer
 *
 * Return: t
 */
int _abs(int n)
{
	int t;
	if (n < 0)
		t = -n;
	else
		t = n;

	return t;
}
