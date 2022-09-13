#include "main.h"

/**
 *_abs - Entry
 *
 * @int - type int
 *
 * Return: Always 0 (success)
 */

int _abs(int)
{
	int n

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1

		return (n);
	}

	return (0);
}

