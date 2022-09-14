#include "main.h"

/**
 *times_table - print 9 times table
 *Return: times table
 *
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

	for (j = 0; j <= 9; j++)
	{
		k = j * k;
		if ((d / 10) > 0)
		{
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
			_putchar((d % 10) + '0');
		if (c < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
		_putchar('\n');
	}
