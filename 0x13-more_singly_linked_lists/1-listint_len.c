#include "lists.h"

/**
 * listint_len - function to print number of elements
 * Description: prints number of elements in a listint_t list
 * @h: pointer to struct
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
