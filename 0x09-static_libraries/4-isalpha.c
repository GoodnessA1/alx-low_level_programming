#include "main.h"

int _isalpha(int c);

/**
 * _isalpha - checks if parameter is a letter
 * @c: integer parameter
 * @terminate: return parameter
 * Return: Always 0 or 1
 */
int _isalpha(int c)
{
	int terminate;

	if ((c >= 65) && (c <= 90))
		terminate = 1;
	else if((c >= 97) && (c <= 122))
		terminate = 1;
	else
		terminate = 0;

	return terminate;
}
