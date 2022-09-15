#include "main.h"

/**
 *more_numbers - entry
 *Description: prints numbers 0 to 14 ten times
 *Return: void
 */

void more_numbers(void)
{
	int x, y;

	for (y = 1; y <= 10; y++)
	{
	for (x = 0; x < 15; x++)

		_putchar(x + '0');
	}

	_putchar('\n');
	}
}
