#include "main.h"

/**
 *print_chessboard - entry
 *
 * Description: prints a chessboard
 *
 * @a: char pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		putchar(a[i][j]);
		}
		putchar('\n');
	}
}

int main(void)
{
	char board[8][8] = {
		{'r','k','b','q','k','b','k','r'},
		{'p','p','p','p','p','p','p','p'},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{'p','p','p','p','p','p','p','p'},
		{'r','k','b','q','k','b','k','r'},
	};

	print_chessboard(board);
	return (0);
}

