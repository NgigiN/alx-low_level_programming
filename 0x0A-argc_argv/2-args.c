#include <stdio.h>
#include "main.h"

/**
 * main - prints the arguments
 * @argc: counts arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", arg[count]);
			count++;
		}
	}
	return (0);
}
