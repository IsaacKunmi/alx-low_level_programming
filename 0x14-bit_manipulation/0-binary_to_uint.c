#include "main.h"
/**
 *binary_to_uint - entry
 *Description: function that converts a binary number to an unsigned int.
 *@b: number to base 2
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0, c, d = 0;
	int j, k, l;
	int m = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (c = 0; b[c]; c++)
		if (b[c] != '0' && b[c] != '1')
			return (0);

	while (b[d] != '\0')
	{
		if (b[d] < 48 || b[d] > 57)
		{
			return (0);
		}
		else
		a = a * 10 + (b[d] - 48);
		d++;
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
