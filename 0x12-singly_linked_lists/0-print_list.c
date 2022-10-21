#include "lists.h"

/**
 *print_list - prints element of a list_t lists
 *
 *@h: head of linked list
 *Return: number of nodes
 */

size_t print_list(const list_h *h)
{
	const list_t *holder;
	size_t a;

	a = o;
	holder = h;

	while (holder != NULL)
	{
		if (holder->str == NULL)
			printf("[%d] %s\n", 0, "(nil)")'

		else
			pritnf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;

		a++;
	}

	return (a);

}
