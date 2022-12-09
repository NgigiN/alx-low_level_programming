#include <stdio.h>


/*
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';
	char lt = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (lt <= 'f')
	{
		putchar(lt);
		lt++;
	}
	putchar('\n');
	return (0);
}
