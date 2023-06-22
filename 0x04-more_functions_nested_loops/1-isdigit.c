#include "main.h"

int _isdigit(int c);

/**
 * _isdigit - checks if number is digit
 * @c: tested value
 * @t: return value
 * 
 * Return: t
 */
int _isdigit(int c)
{
	int t;

	if ((c >= '0') && (c <= '9'))
	{
		t = 1;
	}
	else
	{
		t = 0;
	}

	return (t);
}
