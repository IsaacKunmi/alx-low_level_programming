#include "lists.h"

/**
 * add_nodeint - function adds a new node
 * Description: adds a new node at the beginning of a listint_t list
 * @n: node number
 * @head: first node of list
 * Return: address of new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *container = malloc(sizeof(listint_t));

	if (container == NULL)
		return (NULL);

	container->n = n;
	container->next = *head;

	*head = container;
	return (container);
}
