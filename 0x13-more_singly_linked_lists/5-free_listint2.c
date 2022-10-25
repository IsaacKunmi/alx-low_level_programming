#include "lists.h"

/**
 * free_listint2 - entry
 * Description: sets the head to NULL
 * @head: first node of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *container;

	if (head)
	{
	while (head)
	{
		container = *head;
		*head = container->next;
		free(container);
	}
	}
}
