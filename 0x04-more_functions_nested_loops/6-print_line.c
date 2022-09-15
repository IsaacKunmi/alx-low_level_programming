#include "main.h"

/**
 * print_line - entry
 * @n: int type
 *Description: prints a straight line
 *Return: void
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		return;

		else
		_putchar(95);
	}

	_putchar(10);
}
