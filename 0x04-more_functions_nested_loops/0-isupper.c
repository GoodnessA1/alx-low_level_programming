#include "main.h"

int _islower(int c);
/**
 * _isupper - check the code.
 * @c: value tested
 * @terminate:return value
 * Return: Always 1 if small and 0 if big.
 */
int _isupper(int c)
{
	int terminate;

	if (( c >= 97) && (c <= 122))
		terminate = 0;
	else if (( c >= 65) && (c <= 90))
		terminate = 1;

	return terminate;
}
