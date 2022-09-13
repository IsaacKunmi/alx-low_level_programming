#include "main.h"

/**
 *print_sign - Entry
 *
 * @n: type int
 *
 * Description: checks for lowercase
 *
 * Return: 1 if positive or 0 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}	
	else
	{
		_putchar(45);
		return(-1);
	}

	
}

