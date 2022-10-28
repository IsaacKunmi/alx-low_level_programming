#include "main.h"

/**
 *binary_to_uint - entry
 *Description: function that converts a binary number to an unsigned int.
 *@b: number to base 2
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a = atoi(b), c;
	int j, k, l;
	int m = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}

	while (a)
	{
		k = a % 10;
		l = k << m;
		a /= 10;
		m++;
		sum += l;

	}

	return (sum);
}
