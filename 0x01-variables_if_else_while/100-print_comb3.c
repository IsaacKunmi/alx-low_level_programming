#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of two numbers
 * 01 and 10 are considered as the same combination of the teo digits
 * Return: 0
 */

int main(void)
{
	int a, b, c = 0;

	while (c < 100)
	{
		a = c % 10; /* signles digit */
		b = c/10;  /* doubles digit */

		if (b < a)
		{
			putchar(b + '0');
			putchar(a + '0');


		if (c < 89)
		{
			putchar(44);
			putchar(32);
		}

		}

		c++;
	}

	putchar('\n');
	return (0);
}
				


