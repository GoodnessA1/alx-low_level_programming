#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Main function
 * @argc: args count
 * @argv: arg variable
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char s = *argv[2];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		return(99);
	}

	if ((s == '/' || s == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}


	printf("%d\n", func(num1, num2));
	return (0);
}
