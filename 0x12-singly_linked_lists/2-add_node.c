#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@str: string to be duplicated
 *Return: address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int a;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	for (a = 0; str[a] != '\0'; a++)
		;

	new_node->len= a;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
