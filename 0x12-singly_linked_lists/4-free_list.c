#include "lists.h"

/**
 * free_list - frees a list_t of lists
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *holder;
	list_t *next;

	holder = head;

	while (holder != NULL)
	{
		next = holder->next;
		free(holder->str);
		free(holder);
		holder = next;
	}
}
