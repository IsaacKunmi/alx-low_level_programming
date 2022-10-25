#include "lists.h"

/**
 * free_listint - entry
 * Description: frees a listint_t list
 * @head: first node of a list
 */

void free_listint(listint_t *head)
{
	listint_t *container;

	while (head)
	{
		container = head->next;
		free(head);
		head = container;
	}
}
