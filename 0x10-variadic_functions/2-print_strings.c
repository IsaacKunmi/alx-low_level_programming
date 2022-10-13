#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings ttached to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *strings;

	va_start(args, n);

	a = 0;
	while (a < n)
	{
		strings = va_arg(args, char*);

		if (strings == NULL)
			printf("(nil)");
		else
			printf("%s", strings);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);

		a++;
	}

	printf("\n");

	va_end(args);
}
