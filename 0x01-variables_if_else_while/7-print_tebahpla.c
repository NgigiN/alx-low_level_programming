#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of code
 *
 * return (0) Success
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
