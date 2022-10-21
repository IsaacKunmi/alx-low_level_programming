#include "lists.h"
#include<stdio.h>
/**
 *print_list - prints element of a list_t lists
 *
 *@h: head of linked list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *holder;
	size_t a;

	a = 0;
	holder = h;

	while (holder != NULL)
	{
		if (holder->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", holder->len, holder->str);

		holder = holder->next;

		a++;
	}

	return (a);

}
