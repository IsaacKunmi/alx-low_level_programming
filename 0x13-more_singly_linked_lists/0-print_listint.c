#include "lists.h"
/**
 * print_listint - entry
 * Description: prints all the elements of a listint_t list
 * @h: name of struct
 * Return: list of elements
 *
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}

	return (count);
}
