#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		return ("%i is positive", n);
	else if (n < 0)
		return ("%i is negative", n);
	else
		return ("%i is zero", n);

	return (0);
}
