#include "lists.h"

/**
 * get_nodeint_at_index - entry
 * Description function that return the nth node of linked list
 * @head: first node of linked list
 * @index: position of nth node
 * Return: nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *container = head;

	while (container && (count < index))
	{
		container = container->next;
		count++;
	}

	if (count < index)
		return (NULL);

			return (container);
}
