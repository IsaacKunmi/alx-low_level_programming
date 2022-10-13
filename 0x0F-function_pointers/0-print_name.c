#include "function_pointers.h"

/**
 *print_name - function prints a name
 *@name: input name string to be printed
 *@f: pointer to function
 *Return: Void
 */


void print_name(char *name, void(*f)(char *))
{
	if (name)

	(*f)(name);
}
