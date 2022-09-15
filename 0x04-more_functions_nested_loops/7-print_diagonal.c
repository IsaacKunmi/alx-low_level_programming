#include "main.h"

/**
 * print_line - entry
 * @n: int type
 *Description: prints a diagonal
 *Return: void
 */

void print_diagonal(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		return;

		else
		for (i = 0; i < x; i++)
			_putchar(' ');
			_putchar(92);
			_putchar('\n')
	}

	_putchar(10);
}
