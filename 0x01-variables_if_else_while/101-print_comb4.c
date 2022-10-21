#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of 3 digits
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c, d = 0;

	while (d < 1000)
	{
		a = d % 10; /* singles */
		b = (d / 10) % 10; /* tens */
		c = d / 100; /* hundereds */

		if (c < b && b < a)
		{
		putchar(c + '0');
		putchar(b + '0');
		putchar(a + '0');


		if (d < 700)
		{
			putchar(44);
			putchar(32);
		}
		}

		d++;
	}

	putchar('\n');

	return (0);

}
