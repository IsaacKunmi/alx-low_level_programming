#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combination of two two digit numbers
 * Return: 0 Always
 */

int main(void)
{
	int a, b, c, d, i, j;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /*tens first num */
		b - i % 10; /*units first num */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* tens second num */
			d = j % 10; /* units second num */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}

	}

	putchar(10);

	return (0);
}
