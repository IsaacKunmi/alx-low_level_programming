#include "main.h"

/**
 * reset_to_98 - updates the value of pointer to 98
 *
 * @n: int type
 *
 * Return: Void
 */

void reset_to_98(int *n)
{
	int x = 98;

	n = &x;

	_putchar(*n);
}
