#include "main.h"

int _islower(int c);
/**
 * _islower - check the code.
 * @c: value tested
 * @terminate:return value
 * Return: Always 1 if small and 0 if big.
 */
int _islower(int c)
{
	int terminate;

	if (( c >= 97) && (c <= 122))
		terminate = 1;
	else if (( c >= 65) && (c <= 90))
		terminate = 0;

	return terminate;
}
