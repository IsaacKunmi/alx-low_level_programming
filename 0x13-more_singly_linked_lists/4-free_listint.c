#include "lists.h"

/**
 * free_listint - entry
 * Description: frees a listint_t list
 * @head: first node of a list
 */

void free_listint(listint_t *head)
{
	free(head);
}
