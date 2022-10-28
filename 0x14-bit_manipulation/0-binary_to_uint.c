#include "main.h"
/**
 *binary_to_uint - entry
 *Description: function that converts a binary number to an unsigned int.
 *@b: number to base 2
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int sum, exp;

	if (b == NULL)
		return (0);

	for (c = 0; b[c]; c++)
		if (b[c] != '0' && b[c] != '1')
			return (0);
	for (exp = 1, sum = 0, c--; c >= 0; c--, exp *= 2)
	{
		if (b[c] == '1')
			sum += exp;
	}

	return (sum);
}
