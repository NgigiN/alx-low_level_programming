#include <stdio.h>

/**
 * main - Entry point
 *
 * return (0) - Success
 */

int main(void)
{
	int ch = 'a', hc = 'A';

	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
	while (hc < 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
