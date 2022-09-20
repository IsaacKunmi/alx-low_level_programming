#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value of pointer to 98
 *
 * @n: int type
 *
 * Return: Void
 */

int main(void)
{
	int x = 98;
	int *n;

	n = &x;

	printf("%d", *n);

	return 0;
}
