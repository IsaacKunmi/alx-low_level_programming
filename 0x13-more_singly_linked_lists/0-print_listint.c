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
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
