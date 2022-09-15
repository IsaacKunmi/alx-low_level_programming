#include "main.h"

/**
 * print_square - entry
 * @size: int type
 *Description: prints a square
 *Return: void
 */

void print_square(int size)
{
int x, y;

	for (x = 1; x <= size; x++)
	{
	for (y = 1; y <= size; y++)
	{
		_putchar(35);
	}
	_putchar("\n");
	}
}
