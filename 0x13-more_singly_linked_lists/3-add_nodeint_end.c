#include "lists.h"

/**
 * add_nodeint_end - function adds a new node
 * Description: adds a new node at the end of a listint_t list
 * @n: node number
 * @head: first node of list
 * Return: address of new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *container = malloc(sizeof(listint_t));

	listint_t *last = *head;

	if (container == NULL)
		return (NULL);

	container->n = n;
	container->next = NULL;

	if (*head == NULL)
	{
		*head = container;
		return (container);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = container;
	return (container);
}
