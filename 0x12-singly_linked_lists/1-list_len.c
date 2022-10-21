#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *holder;
	size_t a;

	holder = h;

	a = 0;

	while (holder != NULL)
	{
		holder = holder->next;
		a++;
	}

	return (a);

}
