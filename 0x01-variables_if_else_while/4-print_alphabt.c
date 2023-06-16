#include <stdio.h>                                         /**
 * main - Prints letter of the alphabet                     * @ch: char                                                *                                                          * Return: Always 0 (Successful)                            */                                                        
int main(void)
{                                                                  char ch;                                           
        for (ch = 97; ch <= 97 + 25; ch++)
	{
		if (ch == 'e')
			continue;
		if (ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');                                             return (0);                                        }
