#include "lists.h"

/**
 * sum_listint - entry
 * Description: sums all of the data in a linked list
 * @head: pointer to first node of a linked list
 * Return: sum of elements in a linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
