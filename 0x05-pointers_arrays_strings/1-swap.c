#include "main.h"

/**
 * swap_int - swap values of integers
 *
 * @a: int type
 * @b: int type
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
