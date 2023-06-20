#include "main.h"
#include <stdio.h>

int _abs(int n);
/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;
	
	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

int _abs(int n)
{
	int t;
	if (n < 0)
		t = -n;
	else
		t = n;

	return t;
}
