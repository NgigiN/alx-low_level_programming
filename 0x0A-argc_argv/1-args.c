#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: counts the arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
