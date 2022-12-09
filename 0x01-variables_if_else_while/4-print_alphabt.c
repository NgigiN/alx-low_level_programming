#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * return (0) Success
 */

int main(void)
{
	int ch = 'a';

	if ((ch != 'q') && (ch != 'e'))
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
