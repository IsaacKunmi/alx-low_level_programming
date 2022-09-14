#include "main.h"

/**
 * jack_bauer - prints every minute of the
 * day of Jack Bauer, starting from 00:00 to 23:59
 * Description: prints a list of time
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');
	}
}

