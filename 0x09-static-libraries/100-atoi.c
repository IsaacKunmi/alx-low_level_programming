#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: char array string
 * Description: Number in the string can be preceeded by an infinite
 * number of charcters
 * you need to take into account all -/+ signs before the number
 * if there are no numbers in the string, return 0
 * no need to check for overflow
 * not allowed to hard-code special values
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int a;
	int b, c;

	b = 0;
	c = -1;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			c *= -1;

		if (s[a] > 47 && s[a] < 58)
		{
			if (b < 0)
				b = (b * 10) - (s[a] - '0');
			else
				b = (s[a] - '0') * -1;

			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
		}
	}

	if (c < 0)
		b *= -1;

	return (b);
}
