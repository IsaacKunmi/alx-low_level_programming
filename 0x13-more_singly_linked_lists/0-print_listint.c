#include "lists.h"

/**
 * print_listint - function to print list of elements
 * Description: prints all elements of a listint_t list
 * @h: pointer to struct
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
