#include "lists.h"

/**
 * pop_listint - entry
 * Description: deletes the head node of a linked list
 * @head: pointer to first node of a linked list
 * Return: head node value (n)
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *container;

	if (*head == NULL)
		return (0);

	container = *head;
	*head = container->next;
	a = container->n;
	free(container);

	return (a);
}
