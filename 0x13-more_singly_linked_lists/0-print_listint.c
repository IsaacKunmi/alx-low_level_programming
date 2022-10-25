#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - entry
 * Description: prints all the elements of a listint_t list
 * @h: name of struct
 * Return: list of elements
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}

	return (count);
}
