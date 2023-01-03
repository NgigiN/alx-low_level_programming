#include "main.h"

/**
 * print_chessboard - print chessborad given a 2d array
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		putchar(a[row][column]);
		putchar('\n');
	}
}
